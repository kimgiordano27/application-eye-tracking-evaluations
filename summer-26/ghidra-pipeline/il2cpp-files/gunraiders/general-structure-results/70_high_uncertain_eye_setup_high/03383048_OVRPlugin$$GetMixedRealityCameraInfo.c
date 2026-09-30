/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 03383048
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMixedRealityCameraInfo(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar8;
  long unaff_x25;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  
code_r0x03383048:
  iVar2 = FUN_0230b6a4();
  if (iVar2 != -1) goto LAB_0338326c;
  if ((*(long *)(unaff_x25 + 0x18) == 0) || (unaff_x20 == (long *)0x0)) {
LAB_0338335c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
         ) goto LAB_0338324c;
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
LAB_0338323c:
  puVar4 = (undefined8 *)FUN_01c72498();
  do {
    (*(code *)*puVar4)();
LAB_0338326c:
    do {
      puVar1 = PTR_DAT_0422fb28;
      uVar6 = (ulong)*(uint *)(unaff_x23 + 0x18);
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) {
        do {
          unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x858))
                                        (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x860));
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          uVar6 = FUN_032ea0d4(unaff_x21,0,0);
          if ((uVar6 & 1) == 0) {
            return;
          }
          if ((unaff_x21 == (long *)0x0) ||
             (unaff_x23 = (**(code **)(*unaff_x21 + 0x818))
                                    (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x820)),
             unaff_x23 == 0)) goto LAB_0338335c;
        } while ((int)*(ulong *)(unaff_x23 + 0x18) < 1);
        unaff_x28 = 0;
        uVar6 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      }
      if (uVar6 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar8 = *(undefined8 *)(unaff_x23 + unaff_x28 * 8 + 0x20);
      lVar5 = thunk_FUN_01c496e0(*unaff_x27);
      FUN_03313b6c(lVar5,0);
      if (lVar5 == 0) goto LAB_0338335c;
      *(undefined8 *)(lVar5 + 0x10) = uVar8;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_0337f77c(uVar8);
      if ((uVar6 & 1) != 0) {
        unaff_x25 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                                      );
        FUN_03313b6c(unaff_x25,0);
        if (unaff_x25 == 0) goto LAB_0338335c;
        *(long *)(unaff_x25 + 0x18) = lVar5;
        uVar8 = *(undefined8 *)(lVar5 + 0x10);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar3 = (long *)FUN_0337f85c(uVar8);
        if (plVar3 == (long *)0x0) {
LAB_03382ffc:
          if ((*(long *)(unaff_x25 + 0x18) == 0) ||
             (plVar3 = *(long **)(*(long *)(unaff_x25 + 0x18) + 0x10), plVar3 == (long *)0x0))
          goto LAB_0338335c;
          lVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_0338335c;
          lVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          if (lVar5 == 0) goto LAB_03382ffc;
        }
        *(long *)(unaff_x25 + 0x10) = lVar5;
        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                  );
        FUN_02b67c90(uVar8,unaff_x25,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                     ,0);
        goto code_r0x03383048;
      }
      uVar8 = *(undefined8 *)(lVar5 + 0x10);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_0337f920(uVar8);
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                );
      if ((uVar6 & 1) == 0) {
        FUN_02b67c90(uVar8,lVar5,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                     ,0);
        iVar2 = FUN_0230b6a4();
        if (iVar2 == -1) {
          if (unaff_x20 == (long *)0x0) goto LAB_0338335c;
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_0338323c;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03383224;
        }
        if (unaff_x20 == (long *)0x0) goto LAB_0338335c;
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
               ) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0338328c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498();
LAB_0338328c:
        uVar8 = (*(code *)*puVar4)();
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x29);
        }
        uVar6 = FUN_0337f920(uVar8);
        if ((uVar6 & 1) == 0) {
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
                 ) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0338331c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498();
LAB_0338331c:
          (*(code *)*puVar4)();
        }
        goto LAB_0338326c;
      }
      FUN_02b67c90(uVar8,lVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                   ,0);
      iVar2 = FUN_0230b6a4();
    } while (iVar2 != -1);
    if (unaff_x20 == (long *)0x0) goto LAB_0338335c;
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 == 0) goto LAB_0338323c;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) !=
           *(long *)
            Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
          ) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto LAB_0338323c;
    }
LAB_0338324c:
    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
  } while( true );
LAB_03383224:
  if (*(long *)(piVar7 + -2) ==
      *(long *)
       Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
     ) goto LAB_0338324c;
  uVar6 = uVar6 - 1;
  piVar7 = piVar7 + 4;
  if (uVar6 == 0) goto LAB_0338323c;
  goto LAB_03383224;
}


