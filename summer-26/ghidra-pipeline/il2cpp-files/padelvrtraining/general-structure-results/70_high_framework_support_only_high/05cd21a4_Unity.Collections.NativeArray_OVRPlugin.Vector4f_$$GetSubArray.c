/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 05cd21a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd22bc) */
/* WARNING: Removing unreachable block (ram,0x05cd2034) */
/* WARNING: Removing unreachable block (ram,0x05cd2280) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *unaff_x22;
  long lVar11;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar6;
    __cxa_end_catch();
    if (unaff_x22 != (long *)0x0) {
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cd1fc0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
      (*(code *)*puVar3)();
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d540(lVar11);
    }
    iVar1 = *(int *)(unaff_x20 + 0x14c);
    *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
    if (iVar1 == 0) {
      plVar6 = *(long **)(unaff_x20 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar11 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091fcc60) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_05cd204c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091fcc60,3);
LAB_05cd204c:
      (*(code *)*puVar3)(plVar6,puVar3[1]);
    }
    lVar11 = 0;
    bVar2 = true;
  }
  else {
    if (unaff_x22 != (long *)0x0) {
      lVar11 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x05cd2248;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
code_r0x05cd2248:
      (*(code *)*puVar3)();
    }
    if (param_2 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03e223b0(param_1);
    }
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar6;
    __cxa_end_catch();
    bVar2 = false;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  if (lVar11 == 0) {
    if (bVar2) {
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd0);
    lVar11 = *(long *)(unaff_x20 + 0x78);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091fcc68);
    if (lVar11 == 0) {
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_091add20);
    }
    else {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar6 = (long *)thunk_FUN_03d9f2a8(*(long *)(unaff_x20 + 0x78),0), plVar6 == (long *)0x0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar4 = FUN_06fd2168(uVar10,uVar4,uVar5,0);
    thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar10 = thunk_FUN_03d2ef40();
    FUN_071b07cc(uVar10,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d540(lVar11);
}


