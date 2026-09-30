/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 03382f68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetExternalCameraCount(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  
code_r0x03382f68:
  FUN_03313b6c(param_1,0);
  if (param_1 == 0) {
LAB_0338335c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined8 *)(param_1 + 0x10) = unaff_x25;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_0337f77c(unaff_x25);
  if ((uVar3 & 1) != 0) {
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                              );
    FUN_03313b6c(lVar4,0);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = param_1;
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar5 = (long *)FUN_0337f85c(uVar9);
      if (plVar5 == (long *)0x0) {
LAB_03382ffc:
        if ((*(long *)(lVar4 + 0x18) == 0) ||
           (plVar5 = *(long **)(*(long *)(lVar4 + 0x18) + 0x10), plVar5 == (long *)0x0))
        goto LAB_0338335c;
        lVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_0338335c;
        lVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if (lVar6 == 0) goto LAB_03382ffc;
      }
      *(long *)(lVar4 + 0x10) = lVar6;
      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                );
      FUN_02b67c90(uVar9,lVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                   ,0);
      iVar2 = FUN_0230b6a4();
      if (iVar2 != -1) goto LAB_0338326c;
      if ((*(long *)(lVar4 + 0x18) != 0) && (unaff_x20 != (long *)0x0)) {
        lVar4 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
               ) goto LAB_0338324c;
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
LAB_0338323c:
        puVar7 = (undefined8 *)FUN_01c72498();
        goto LAB_0338325c;
      }
    }
    goto LAB_0338335c;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_0337f920(uVar9);
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                            );
  if ((uVar3 & 1) != 0) {
    FUN_02b67c90(uVar9,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                 ,0);
    iVar2 = FUN_0230b6a4();
    if (iVar2 != -1) goto LAB_0338326c;
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
             ) goto LAB_0338324c;
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      goto LAB_0338323c;
    }
    goto LAB_0338335c;
  }
  FUN_02b67c90(uVar9,param_1,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
               ,0);
  iVar2 = FUN_0230b6a4();
  if (iVar2 == -1) {
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
             ) goto LAB_0338324c;
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      goto LAB_0338323c;
    }
    goto LAB_0338335c;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_0338335c;
  lVar4 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
         ) {
        puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0338328c;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar7 = (undefined8 *)FUN_01c72498();
LAB_0338328c:
  uVar9 = (*(code *)*puVar7)();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x29);
  }
  uVar3 = FUN_0337f920(uVar9);
  if ((uVar3 & 1) == 0) {
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
           ) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0338331c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498();
LAB_0338331c:
    (*(code *)*puVar7)();
  }
LAB_0338326c:
  puVar1 = PTR_DAT_0422fb28;
  uVar3 = (ulong)*(uint *)(unaff_x23 + 0x18);
  unaff_x28 = unaff_x28 + 1;
  if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) {
    do {
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x858))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x860));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar3 = FUN_032ea0d4(unaff_x21,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((unaff_x21 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*unaff_x21 + 0x818))
                                (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x820)),
         unaff_x23 == 0)) goto LAB_0338335c;
    } while ((int)*(ulong *)(unaff_x23 + 0x18) < 1);
    unaff_x28 = 0;
    uVar3 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
  }
  if (uVar3 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  unaff_x25 = *(undefined8 *)(unaff_x23 + unaff_x28 * 8 + 0x20);
  param_1 = thunk_FUN_01c496e0(*unaff_x27);
  goto code_r0x03382f68;
LAB_0338324c:
  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
LAB_0338325c:
  (*(code *)*puVar7)();
  goto LAB_0338326c;
}


