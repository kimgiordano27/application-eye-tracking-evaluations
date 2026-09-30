/*
FUNCTION_NAME: FUN_046da724
ENTRY_POINT: 046da724
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_046da724(long param_1,int param_2,ulong param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  
  puVar5 = PTR_DAT_065ca018;
  if ((DAT_06a6c73e & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca018);
    DAT_06a6c73e = 1;
  }
  lVar7 = FUN_02ce7ad4(*(undefined8 *)puVar5,param_2);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02ce0978(lVar9);
  }
  lVar9 = FUN_02ce7ad4(lVar9,param_2);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar11 = (ulong)uVar2;
  FUN_04f53d58(*(undefined8 *)(param_1 + 0x18),0,lVar9,0,uVar11,0);
  if ((0 < (int)uVar2) && ((param_3 & 1) != 0)) {
    if (lVar9 == 0) goto LAB_046da8c4;
    uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
    uVar12 = 0;
    puVar13 = (uint *)(lVar9 + 0x20);
    do {
      if (uVar10 <= uVar12) goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
      if (-1 < (int)*puVar13) {
        plVar8 = *(long **)(puVar13 + 2);
        if (plVar8 == (long *)0x0) goto LAB_046da8c4;
        uVar6 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
        uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
        if (uVar10 <= uVar12) goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
        *puVar13 = uVar6 & 0x7fffffff;
      }
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 10;
    } while (uVar11 != uVar12);
  }
  if (0 < (int)uVar2) {
    if (lVar9 == 0) {
LAB_046da8c4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = *(uint *)(lVar9 + 0x18);
    uVar12 = 0;
    do {
      if (uVar2 <= uVar12) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      iVar3 = *(int *)(lVar9 + uVar12 * 0x28 + 0x20);
      if (-1 < iVar3) {
        if (lVar7 == 0) goto LAB_046da8c4;
        iVar4 = 0;
        if (param_2 != 0) {
          iVar4 = iVar3 / param_2;
        }
        uVar6 = iVar3 - iVar4 * param_2;
        if (*(uint *)(lVar7 + 0x18) <= uVar6)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
        lVar1 = lVar7 + (ulong)uVar6 * 4;
        *(int *)(lVar9 + uVar12 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar12 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
  }
  *(long *)(param_1 + 0x10) = lVar7;
  *(long *)(param_1 + 0x18) = lVar9;
  return;
}


