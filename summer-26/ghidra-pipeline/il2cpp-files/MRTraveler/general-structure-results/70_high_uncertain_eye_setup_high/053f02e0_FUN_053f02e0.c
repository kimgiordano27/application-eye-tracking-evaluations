/*
FUNCTION_NAME: FUN_053f02e0
ENTRY_POINT: 053f02e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_5
*/


int FUN_053f02e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07112c04(8);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar7 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0)
      goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo;
      if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_053f04ac;
      puVar1 = (undefined8 *)(lVar4 + lVar7);
      if (param_2 == 0)
      goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo;
      local_50 = *puVar1;
      uStack_48 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_38 = puVar1[3];
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_50,*(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar3 = (ulong)*(int *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x20;
    } while ((long)uVar10 < (long)uVar3);
  }
  if ((int)uVar3 <= (int)uVar10) {
    return 0;
  }
  uVar8 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar6 = (uint)uVar8;
      if ((int)uVar3 <= (int)uVar10) {
        FUN_071245a8(*(undefined8 *)(param_1 + 0x10),uVar8,(int)uVar3 - uVar6,0);
        iVar2 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar6;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar2 - uVar6;
      }
      uVar5 = -(uVar10 >> 0x1f & 1) & 0xffffffe000000000 | (uVar10 & 0xffffffff) << 5;
      uVar10 = (ulong)(int)uVar10;
      do {
        uVar5 = uVar5 + 0x20;
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0)
        goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto LAB_053f04ac;
        puVar1 = (undefined8 *)(lVar7 + uVar5);
        if (param_2 == 0)
        goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo;
        local_50 = *puVar1;
        uStack_48 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_38 = puVar1[3];
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&local_50,*(undefined8 *)(param_2 + 0x28)
                          );
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)uVar3);
      uVar9 = (uint)uVar10;
    } while ((int)uVar3 <= (int)uVar9);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_053f04ac:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar4 = lVar7 + (long)(int)uVar9 * 0x20;
    uVar13 = *(undefined8 *)(lVar4 + 0x20);
    uVar12 = *(undefined8 *)(lVar4 + 0x38);
    uVar11 = *(undefined8 *)(lVar4 + 0x30);
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_053f04ac;
    lVar7 = lVar7 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar7 + 0x20) = uVar13;
    *(undefined8 *)(lVar7 + 0x38) = uVar12;
    *(undefined8 *)(lVar7 + 0x30) = uVar11;
    thunk_FUN_03d233cc(lVar7 + 0x28,0);
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    uVar8 = (ulong)(uVar6 + 1);
  } while( true );
}


