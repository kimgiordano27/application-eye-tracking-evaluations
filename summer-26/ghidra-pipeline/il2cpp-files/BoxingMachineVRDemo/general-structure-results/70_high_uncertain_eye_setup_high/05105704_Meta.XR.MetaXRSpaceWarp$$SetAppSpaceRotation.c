/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpaceRotation
ENTRY_POINT: 05105704
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MetaXRSpaceWarp__SetAppSpaceRotation(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_02d6084c(PTR_DAT_0675eef8);
  FUN_02d6084c(PTR_DAT_06777330);
  FUN_02d6084c(PTR_DAT_06775808);
  FUN_02d6084c(PTR_DAT_06780410);
  *(undefined1 *)(unaff_x27 + 0xb4a) = 1;
  if ((unaff_x20 != 0) && (*(int *)(unaff_x20 + 0x24) == 8)) {
    uVar4 = FUN_05105c30();
    return uVar4;
  }
  if (unaff_x19 == (long *)0x0) {
LAB_05105b34:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar2 != 5) {
      switch(iVar2) {
      case 1:
        uVar4 = FUN_051064a8();
        return uVar4;
      case 2:
        uVar4 = FUN_05106fd8();
        return uVar4;
      case 3:
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar6 != (long *)0x0) {
          pcVar9 = *(code **)(*plVar6 + 0x168);
          goto LAB_051057ec;
        }
        goto LAB_05105b34;
      default:
        FUN_028f4e40();
        uVar3 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = uVar3;
        uVar4 = FUN_0503c914(&stack0x00000008,0);
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06780418);
        FUN_04e83184(uVar7,uVar4,0);
        break;
      case 6:
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780410);
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar6);
        }
        FUN_05139588(uVar4,plVar6,0);
        return uVar4;
      case 9:
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar6);
        }
        uVar4 = *(undefined8 *)PTR_DAT_06766e70;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar4,0);
        uVar5 = FUN_0501ed54();
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_04f8c548(plVar6,0);
          return uVar4;
        }
        uVar5 = FUN_05107b9c();
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        lVar8 = *(long *)PTR_DAT_0675eef8;
        if (*(int *)(lVar8 + 0xe4) != 0) goto LAB_05105810;
        goto LAB_0510580c;
      case 0xb:
      case 0xc:
        uVar4 = *(undefined8 *)PTR_DAT_06777330;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar4,0);
        uVar5 = FUN_0501ed54();
        puVar1 = PTR_DAT_06775808;
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)PTR_DAT_06775808;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar1;
          }
          return **(undefined8 **)(lVar8 + 0xb8);
        }
      case 7:
      case 8:
      case 10:
      case 0x10:
      case 0x11:
        pcVar9 = *(code **)(*unaff_x19 + 0x248);
LAB_051057ec:
        (*pcVar9)();
        lVar8 = *(long *)PTR_DAT_0675eef8;
        if (*(int *)(lVar8 + 0xe4) == 0) {
LAB_0510580c:
          thunk_FUN_02dbd7b4(lVar8);
        }
LAB_05105810:
        FUN_04f8e414(0);
        uVar4 = FUN_05107618();
        return uVar4;
      }
      goto LAB_05105b08;
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x288))();
  } while ((uVar5 & 1) != 0);
  thunk_FUN_02dc61f4(PTR_DAT_06780350);
LAB_05105b08:
  uVar4 = FUN_050924a8();
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06780420);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar4,uVar7);
}


