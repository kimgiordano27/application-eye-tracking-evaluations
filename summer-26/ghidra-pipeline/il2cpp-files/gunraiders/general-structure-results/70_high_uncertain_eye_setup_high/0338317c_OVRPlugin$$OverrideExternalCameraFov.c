/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 0338317c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraFov(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  
code_r0x0338317c:
  FUN_02b67c90(param_2,unaff_x24,*param_1,0);
  iVar2 = FUN_0230b6a4();
  if (iVar2 == -1) {
    if (unaff_x20 != (long *)0x0) {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0338323c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
           ) goto LAB_0338324c;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
        if (uVar8 == 0) goto LAB_0338323c;
      } while( true );
    }
  }
  else if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
           ) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0338328c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498();
LAB_0338328c:
    uVar6 = (*(code *)*puVar5)();
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x29);
    }
    uVar8 = FUN_0337f920(uVar6);
    if ((uVar8 & 1) == 0) {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
             ) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0338331c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_0338331c:
      (*(code *)*puVar5)();
    }
LAB_0338326c:
    while( true ) {
      puVar1 = PTR_DAT_0422fb28;
      uVar8 = (ulong)*(uint *)(unaff_x23 + 0x18);
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) {
        do {
          unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x858))
                                        (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x860));
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          uVar8 = FUN_032ea0d4(unaff_x21,0,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if ((unaff_x21 == (long *)0x0) ||
             (unaff_x23 = (**(code **)(*unaff_x21 + 0x818))
                                    (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x820)),
             unaff_x23 == 0)) goto LAB_0338335c;
        } while ((int)*(ulong *)(unaff_x23 + 0x18) < 1);
        unaff_x28 = 0;
        uVar8 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      }
      if (uVar8 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar6 = *(undefined8 *)(unaff_x23 + unaff_x28 * 8 + 0x20);
      unaff_x24 = thunk_FUN_01c496e0(*unaff_x27);
      FUN_03313b6c(unaff_x24,0);
      if (unaff_x24 == 0) goto LAB_0338335c;
      *(undefined8 *)(unaff_x24 + 0x10) = uVar6;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_0337f77c(uVar6);
      if ((uVar8 & 1) == 0) break;
      lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                                );
      FUN_03313b6c(lVar7,0);
      if (lVar7 == 0) goto LAB_0338335c;
      *(long *)(lVar7 + 0x18) = unaff_x24;
      uVar6 = *(undefined8 *)(unaff_x24 + 0x10);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar3 = (long *)FUN_0337f85c(uVar6);
      if (plVar3 == (long *)0x0) {
LAB_03382ffc:
        if ((*(long *)(lVar7 + 0x18) == 0) ||
           (plVar3 = *(long **)(*(long *)(lVar7 + 0x18) + 0x10), plVar3 == (long *)0x0))
        goto LAB_0338335c;
        lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      }
      else {
        if (plVar3 == (long *)0x0) goto LAB_0338335c;
        lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
        if (lVar4 == 0) goto LAB_03382ffc;
      }
      *(long *)(lVar7 + 0x10) = lVar4;
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                );
      FUN_02b67c90(uVar6,lVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                   ,0);
      iVar2 = FUN_0230b6a4();
      if (iVar2 == -1) {
        if ((*(long *)(lVar7 + 0x18) != 0) && (unaff_x20 != (long *)0x0)) {
          lVar7 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                 ) goto LAB_0338324c;
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          goto LAB_0338323c;
        }
        goto LAB_0338335c;
      }
    }
    uVar6 = *(undefined8 *)(unaff_x24 + 0x10);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_0337f920(uVar6);
    param_2 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                );
    param_1 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
    ;
    if ((uVar8 & 1) != 0) goto code_r0x033830f0;
    goto code_r0x0338317c;
  }
LAB_0338335c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
code_r0x033830f0:
  FUN_02b67c90(param_2,unaff_x24,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
               ,0);
  iVar2 = FUN_0230b6a4();
  if (iVar2 != -1) goto LAB_0338326c;
  if (unaff_x20 == (long *)0x0) goto LAB_0338335c;
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
         ) goto LAB_0338324c;
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
LAB_0338323c:
  puVar5 = (undefined8 *)FUN_01c72498();
LAB_0338325c:
  (*(code *)*puVar5)();
  goto LAB_0338326c;
LAB_0338324c:
  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
  goto LAB_0338325c;
}


