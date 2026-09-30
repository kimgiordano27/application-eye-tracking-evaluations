/*
FUNCTION_NAME: FUN_041e3820
ENTRY_POINT: 041e3820
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x041e3a80) */
/* WARNING: Removing unreachable block (ram,0x041e3c78) */
/* WARNING: Removing unreachable block (ram,0x041e3c38) */
/* WARNING: Removing unreachable block (ram,0x041e3c64) */

void FUN_041e3820(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_04840f87 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a568);
    thunk_FUN_01efb3a4(PTR_DAT_0458fbf0);
    thunk_FUN_01efb3a4(PTR_DAT_0458fc70);
    thunk_FUN_01efb3a4(PTR_DAT_0458fc30);
    thunk_FUN_01efb3a4(PTR_DAT_04590090);
    DAT_04840f87 = 1;
  }
  uVar2 = FUN_041f7fb0(param_2,param_1,0);
  if ((uVar2 & 1) == 0) goto LAB_041e3a84;
  if ((*(byte *)(param_1 + 0x40) >> 5 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) != 0) {
      iVar1 = FUN_0409f61c(*(long *)(param_1 + 0x70),0);
      if (iVar1 == 0) {
        if (*(int *)(*(long *)PTR_DAT_0458fbf0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar3 = (long *)FUN_041ddc6c(param_1);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_041d4560(plVar3,*(undefined8 *)(param_1 + 0x50));
        plVar7 = (long *)plVar3[10];
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0458a568) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_041e3b3c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_0458a568,0);
LAB_041e3b3c:
        (*(code *)*puVar4)(plVar7,plVar3,puVar4[1]);
        if (plVar3 != (long *)0x0) {
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_041e3c1c;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01ecb238(plVar3,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_041e3c1c:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
        goto LAB_041e3a84;
      }
      if ((*(byte *)(param_1 + 0x40) >> 5 & 1) == 0) goto LAB_041e38b0;
    }
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (iVar1 = FUN_0409f61c(*(long *)(param_1 + 0x70),0), iVar1 == 1)) {
      if (*(int *)(*(long *)PTR_DAT_0458fc30 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar3 = (long *)FUN_041de1d4(param_1);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar3,*(undefined8 *)(param_1 + 0x50));
      plVar7 = (long *)plVar3[10];
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0458a568) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_041e3bac;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_0458a568,0);
LAB_041e3bac:
      (*(code *)*puVar4)(plVar7,plVar3,puVar4[1]);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_041e3c48;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_041e3c48:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      goto LAB_041e3a84;
    }
  }
LAB_041e38b0:
  if (*(int *)(*(long *)PTR_DAT_0458fc70 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_041de4d4(param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar3,*(undefined8 *)(param_1 + 0x50));
  plVar7 = (long *)plVar3[10];
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0458a568) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_041e39f8;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_0458a568,0);
LAB_041e39f8:
  (*(code *)*puVar4)(plVar7,plVar3,puVar4[1]);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041e3a68;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_041e3a68:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
LAB_041e3a84:
  FUN_025ebc08(param_1,param_2,*(undefined8 *)PTR_DAT_04590090);
  return;
}


