/*
FUNCTION_NAME: FUN_02bf3810
ENTRY_POINT: 02bf3810
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02bf3c6c) */
/* WARNING: Removing unreachable block (ram,0x02bf3cb4) */

void FUN_02bf3810(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 local_60 [32];
  
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bf37d0 with catch @ 02bf3834
                       try { // try from 02bf3834 to 02cf384b has its CatchHandler @ 02bf3788 */
  if ((DAT_03fefab6 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
                    /* try { // try from 02bf384c to 02cf3863 has its CatchHandler @ 02bf38d8 */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    DAT_03fefab6 = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* try { // try from 02bf3864 to 02cf38c7 has its CatchHandler @ 02bf3788 */
                    /* WARNING: Subroutine does not return */
    FUN_03051bf4(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_03060c48(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74(lVar6);
  }
  plVar4 = (long *)thunk_FUN_01afa9e0(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ae9e74(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02bf3ac8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(param_3,lVar6,0);
LAB_02bf3ac8:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02bf3b30;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar2,0);
LAB_02bf3b30:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) goto LAB_02bf3bf4;
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ae9e74(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto FUN_02bf3ba8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,lVar6,0);
FUN_02bf3ba8:
        (*(code *)*puVar5)(local_60,plVar4,puVar5[1]);
        Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose
                  (param_1,param_2,local_60,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
        param_2 = param_2 + 1;
      } while( true );
    }
    FUN_02bf461c(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 02bf38c8 to 02cf38d7 has its CatchHandler @ 02bf38d8 */
      lVar6 = FUN_01ae9e74(lVar6);
    }
    lVar7 = *plVar4;
                    /* catch() { ... } // from try @ 02bf384c with catch @ 02bf38d8
                       catch() { ... } // from try @ 02bf38c8 with catch @ 02bf38d8 */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02bf38dc to 02cf38df has its CatchHandler @ 02bf38e8 */
    if (uVar9 != 0) {
                    /* try { // try from 02bf38e0 to 02cf38eb has its CatchHandler @ 02bf3788 */
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bf3988;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,lVar6,0);
LAB_02bf3988:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_02bf2cf0(param_1,(int)param_1[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_0306273c(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      if (param_1 == plVar4) {
        FUN_0306273c(param_1[2],0,param_1[2],param_2,param_2,0);
        FUN_0306273c(param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar7 = param_1[2];
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ae9e74(lVar6);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_02bf3a98;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,lVar6,5);
LAB_02bf3a98:
        (*(code *)*puVar5)(plVar4,lVar7,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_02bf3c88:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
LAB_02bf3bf4:
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bf3c54;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ae9f78(plVar4,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_02bf3c54:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_02bf3c88;
}


