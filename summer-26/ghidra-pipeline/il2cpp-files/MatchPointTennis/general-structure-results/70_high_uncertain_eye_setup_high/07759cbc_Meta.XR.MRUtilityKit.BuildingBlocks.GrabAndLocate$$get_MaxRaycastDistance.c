/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_MaxRaycastDistance
ENTRY_POINT: 07759cbc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_MaxRaycastDistance
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 uVar9;
  long lVar10;
  undefined8 *unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  
code_r0x07759cbc:
  FUN_05bade44(param_1,param_2,param_3);
  param_2 = unaff_x24;
  do {
    iVar3 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (3 < iVar3) {
      lVar10 = *(long *)PTR_DAT_09f22e40;
      lVar6 = *(long *)(lVar10 + 0x38);
      if (lVar6 == 0) {
        FUN_04482014(lVar10);
        lVar6 = *(long *)(lVar10 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32998,**(undefined8 **)(lVar6 + 0xb8),0);
    }
    do {
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_0775978c;
      lVar10 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_09f1e870;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0775978c;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        plVar7 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        *plVar7 = unaff_x22;
        thunk_FUN_044bb4b4(plVar7,unaff_x22);
      }
      else {
        FUN_05bade44(lVar6,unaff_x22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      unaff_x29 = unaff_x29 + 1;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + unaff_w23;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x29) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x29) goto LAB_07759df0;
      plVar7 = (long *)(unaff_x20 + unaff_x29 * 8 + 0x20);
      unaff_x22 = *plVar7;
      lVar6 = FUN_0775abb4(unaff_x22);
      if (lVar6 == 0) goto LAB_0775978c;
      unaff_w23 = FUN_094f3ae4(lVar6,0);
      in_stack_00000010 = 0;
      lVar6 = unaff_x19[0x13];
      while( true ) {
        if (lVar6 == 0) goto LAB_0775978c;
        if (*(int *)(lVar6 + 0x18) <= in_stack_00000010) goto LAB_07759c14;
        lVar6 = FUN_05badb74(lVar6,in_stack_00000010,*unaff_x28);
        if ((lVar6 == 0) || (unaff_x19[0x13] == 0)) goto LAB_0775978c;
        iVar3 = *(int *)(lVar6 + 0x18);
        lVar6 = FUN_05badb74(unaff_x19[0x13],in_stack_00000010,*unaff_x28);
        if ((lVar6 == 0) || (unaff_x19[0x13] == 0)) goto LAB_0775978c;
        iVar1 = *(int *)(lVar6 + 0x1c);
        lVar6 = FUN_05badb74(unaff_x19[0x13],in_stack_00000010,*unaff_x28);
        if (lVar6 == 0) goto LAB_0775978c;
        if (unaff_w23 < (iVar1 + iVar3) - *(int *)(lVar6 + 0x20)) break;
        in_stack_00000010 = in_stack_00000010 + 1;
        lVar6 = unaff_x19[0x13];
      }
      if (unaff_x19[0x13] == 0) goto LAB_0775978c;
      param_2 = FUN_05badb74(unaff_x19[0x13],in_stack_00000010,*unaff_x28);
      iVar3 = (**(code **)(*unaff_x19 + 0x4f8))();
      if (3 < iVar3) {
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_x29) {
LAB_07759df0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar7 = (long *)*plVar7;
        uVar9 = *(undefined8 *)PTR_DAT_09f32978;
        if (plVar7 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_0775978c;
          uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar5 = FUN_07a3b850(&stack0x00000010,0);
        uVar9 = FUN_078b56f4(uVar9,uVar4,*(undefined8 *)PTR_DAT_09f32988,uVar5,0);
        plVar7 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar6 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000008 + 4);
        if (plVar7 == (long *)0x0) goto LAB_0775978c;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
          uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_07759df0;
        plVar7[4] = lVar6;
        thunk_FUN_044bb4b4(plVar7 + 4,lVar6);
        FUN_0771ec00(uVar9,plVar7,0);
      }
    } while (param_2 != 0);
LAB_07759c14:
    lVar6 = unaff_x19[0x14];
    lVar8 = unaff_x19[5];
    lVar10 = unaff_x19[7];
    param_2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32960);
    FUN_0775acec(param_2,(int)lVar6,lVar8,(int)lVar10);
    if (param_2 == 0) {
LAB_0775978c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0775ae80();
    param_1 = unaff_x19[0x13];
    if (param_1 == 0) goto LAB_0775978c;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)PTR_DAT_09f32968;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_0775978c;
    uVar2 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(lVar6 + 0x18) <= uVar2) break;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
    *plVar7 = param_2;
    thunk_FUN_044bb4b4(plVar7,param_2);
  } while( true );
  param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
  unaff_x24 = param_2;
  goto code_r0x07759cbc;
}


