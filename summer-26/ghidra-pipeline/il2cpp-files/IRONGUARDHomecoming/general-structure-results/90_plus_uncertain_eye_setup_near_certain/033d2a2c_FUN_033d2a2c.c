/*
FUNCTION_NAME: FUN_033d2a2c
ENTRY_POINT: 033d2a2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x033d2fa4) */
/* WARNING: Removing unreachable block (ram,0x033d2f14) */

void FUN_033d2a2c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_04832500 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<char>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<char>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream__ctor__);
    DAT_04832500 = 1;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
      plVar9 = *(long **)(param_1 + 0x38);
      if (plVar9 != (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        puVar8 = Method_System_IO_MemoryStream__ctor__;
        puVar7 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
        puVar6 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
        puVar5 = 
        Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<char>__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar15 = *plVar9;
          lVar14 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_033d2b68;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,0);
LAB_033d2b68:
          uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar16 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                               );
            if (plVar9 == (long *)0x0) goto LAB_033d2f08;
            lVar14 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 == 0) goto LAB_033d2ee0;
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_033d2ec8;
          }
          lVar15 = *plVar9;
          lVar14 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_033d2bc8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,1);
LAB_033d2bc8:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar11);
          }
          if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar16 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar7,0);
          if ((uVar16 & 1) == 0) {
            if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar16 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar8,0);
            if ((uVar16 & 1) != 0) {
              if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = FUN_033cea34(plVar11[3],1);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar12 = FUN_033cdff8();
              lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<char>__
                                         );
              FUN_033e7ee8(lVar14,uVar12,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar18 = *(undefined8 *)(lVar14 + 0x10);
              uVar12 = FUN_033e825c(lVar14,0);
              uVar1 = *(undefined4 *)(lVar14 + 0x20);
              uVar13 = FUN_033e81e8(lVar14,0);
              lVar14 = FUN_033d3130(param_1,uVar18,uVar12,uVar1,uVar13);
              lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
              FUN_033e7198(lVar15,lVar14,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar15 = FUN_033e7438(lVar15,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (*(char *)(lVar15 + 0x20) == '\x02') {
                plVar11 = *(long **)(param_1 + 0x18);
                uStack_b8 = 0;
                local_c0 = 0;
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_d8 = 0;
                local_e0 = 0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                uVar12 = FUN_033e7c3c(lVar15,&local_e0,0);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c(uVar12,uVar12);
                }
                (**(code **)(*plVar11 + 0x308))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x310));
              }
              else if (*(char *)(lVar15 + 0x20) == '0') {
                plVar11 = *(long **)(param_1 + 0x18);
                uVar12 = FUN_033e75e8(lVar15,0);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c(uVar12,uVar12);
                }
                (**(code **)(*plVar11 + 0x308))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x310));
              }
              FUN_0358d1e4(lVar15,0,*(undefined4 *)(lVar15 + 0x18),0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0358d1e4(lVar14,0,*(undefined4 *)(lVar14 + 0x18),0);
            }
          }
          else {
            if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = FUN_033cea34(plVar11[3],1);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar12 = FUN_033cdff8();
            lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_033e7198(lVar14,uVar12,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = FUN_033e7438(lVar14,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(char *)(lVar14 + 0x20) == '\x02') {
              plVar11 = *(long **)(param_1 + 0x18);
              uStack_78 = 0;
              local_80 = 0;
              uStack_68 = 0;
              uStack_70 = 0;
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uVar12 = FUN_033e7c3c(lVar14,&local_a0,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar12,uVar12);
              }
              (**(code **)(*plVar11 + 0x308))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x310));
            }
            else if (*(char *)(lVar14 + 0x20) == '0') {
              plVar11 = *(long **)(param_1 + 0x18);
              uVar12 = FUN_033e75e8(lVar14,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar12,uVar12);
              }
              (**(code **)(*plVar11 + 0x308))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x310));
            }
            FUN_0358d1e4(lVar14,0,*(undefined4 *)(lVar14 + 0x18),0);
          }
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_033d2f1c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_033d2ec8:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_033d2efc;
    }
  }
LAB_033d2ee0:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_033d2efc:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033d2f08:
  *(undefined1 *)(param_1 + 0x30) = 0;
LAB_033d2f1c:
  FUN_03545d38(*(undefined8 *)(param_1 + 0x18),0);
  return;
}


