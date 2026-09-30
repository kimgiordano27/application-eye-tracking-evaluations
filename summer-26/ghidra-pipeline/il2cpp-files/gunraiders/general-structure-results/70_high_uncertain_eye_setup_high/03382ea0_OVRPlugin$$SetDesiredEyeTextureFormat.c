/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 03382ea0
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


void OVRPlugin__SetDesiredEyeTextureFormat(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  
  FUN_01c5d288();
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
              );
  *(undefined1 *)(unaff_x22 + 0x613) = 1;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
  ;
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  plVar8 = (long *)PTR_DAT_0422fb28;
  if (unaff_x21 != (long *)0x0) {
LAB_03382ed8:
    do {
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x858))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x860));
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*plVar8);
      }
      uVar4 = FUN_032ea0d4(unaff_x21,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if ((unaff_x21 == (long *)0x0) ||
         (lVar5 = (**(code **)(*unaff_x21 + 0x818))
                            (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x820)), lVar5 == 0))
      break;
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar4 = 0;
        uVar10 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
LAB_03382f50:
        if (uVar10 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        uVar12 = *(undefined8 *)(lVar5 + uVar4 * 8 + 0x20);
        lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_03313b6c(lVar6,0);
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x10) = uVar12;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_0337f77c(uVar12);
        if ((uVar10 & 1) != 0) {
          lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                                    );
          FUN_03313b6c(lVar7,0);
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x18) = lVar6;
            uVar12 = *(undefined8 *)(lVar6 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            plVar8 = (long *)FUN_0337f85c(uVar12);
            if (plVar8 == (long *)0x0) {
LAB_03382ffc:
              if ((*(long *)(lVar7 + 0x18) == 0) ||
                 (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) + 0x10), plVar8 == (long *)0x0))
              break;
              lVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
            }
            else {
              if (plVar8 == (long *)0x0) break;
              lVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              if (lVar6 == 0) goto LAB_03382ffc;
            }
            *(long *)(lVar7 + 0x10) = lVar6;
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                       );
            FUN_02b67c90(uVar12,lVar7,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                         ,0);
            iVar3 = FUN_0230b6a4();
            if (iVar3 != -1) goto LAB_0338326c;
            if ((*(long *)(lVar7 + 0x18) != 0) && (unaff_x20 != (long *)0x0)) {
              lVar6 = *unaff_x20;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                     ) goto LAB_0338324c;
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
LAB_0338323c:
              puVar9 = (undefined8 *)FUN_01c72498();
              goto LAB_0338325c;
            }
          }
          break;
        }
        uVar12 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_0337f920(uVar12);
        uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                                   );
        if ((uVar10 & 1) != 0) {
          FUN_02b67c90(uVar12,lVar6,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                       ,0);
          iVar3 = FUN_0230b6a4();
          if (iVar3 != -1) goto LAB_0338326c;
          if (unaff_x20 != (long *)0x0) {
            lVar6 = *unaff_x20;
            uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                   ) goto LAB_0338324c;
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            goto LAB_0338323c;
          }
          break;
        }
        FUN_02b67c90(uVar12,lVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_MoveNext__
                     ,0);
        iVar3 = FUN_0230b6a4();
        if (iVar3 == -1) {
          if (unaff_x20 != (long *)0x0) {
            lVar6 = *unaff_x20;
            uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_MasterAudio_AudioGroupInfo>_get_Current__
                   ) goto LAB_0338324c;
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            goto LAB_0338323c;
          }
          break;
        }
        if (unaff_x20 == (long *)0x0) break;
        lVar6 = *unaff_x20;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
               ) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0338328c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_0338328c:
        uVar12 = (*(code *)*puVar9)();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar10 = FUN_0337f920(uVar12);
        if ((uVar10 & 1) == 0) {
          lVar6 = *unaff_x20;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_MasterAudio_AudioGroupInfo>_Dispose__
                 ) {
                puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0338331c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_0338331c:
          (*(code *)*puVar9)();
        }
        goto LAB_0338326c;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
LAB_0338324c:
  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
LAB_0338325c:
  (*(code *)*puVar9)();
LAB_0338326c:
  uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
  uVar4 = uVar4 + 1;
  plVar8 = (long *)PTR_DAT_0422fb28;
  if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar4) goto LAB_03382ed8;
  goto LAB_03382f50;
}


