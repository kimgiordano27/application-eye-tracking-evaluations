/*
FUNCTION_NAME: FUN_04129fbc
ENTRY_POINT: 04129fbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0412a278) */

int FUN_04129fbc(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_04840780 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a438);
                    /* try { // try from 04129ff0 to 0422a1af has its CatchHandler @ 0412984c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04840780 = 1;
  }
  puVar1 = PTR_DAT_0458a438;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar4 = FUN_02b142d4(*(long *)(param_1 + 0x30),param_2,&local_40,*(undefined8 *)PTR_DAT_0458a438
                        );
    if ((uVar4 & 1) == 0) {
      return -1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = FUN_02b142d4(*(long *)(param_1 + 0x30),local_40._4_4_,&local_50,*(undefined8 *)puVar1)
      ;
      puVar5 = &local_48;
      if ((uVar4 & 1) == 0) {
        puVar5 = (undefined8 *)(param_1 + 0x38);
      }
      plVar8 = (long *)*puVar5;
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0412a0d8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_0412a0d8:
        plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        puVar2 = Method_System_DateTime_AddTicks__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar9 = 0;
        do {
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0412a14c;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0412a14c:
          uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          if ((uVar4 & 1) == 0) {
            iVar9 = 0;
            iVar10 = 9;
            iVar3 = 9;
            goto joined_r0x0412a1d0;
          }
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0412a1a8;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0412a1a8:
          iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          if (iVar3 == param_2) goto LAB_0412a1d8;
          iVar9 = iVar9 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0412a1d8:
  iVar10 = 3;
  iVar3 = 3;
joined_r0x0412a1d0:
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0412a238;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0412a238:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
    iVar3 = iVar10;
  }
  if ((iVar3 != 9) && (iVar3 != 0)) {
    return iVar9;
  }
  return -1;
}


