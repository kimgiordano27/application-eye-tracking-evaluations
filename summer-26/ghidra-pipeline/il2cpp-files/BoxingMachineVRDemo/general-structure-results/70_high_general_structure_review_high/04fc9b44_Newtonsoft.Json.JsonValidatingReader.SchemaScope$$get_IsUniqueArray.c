/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 04fc9b44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray
          (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  uint unaff_w21;
  long lVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  while( true ) {
    if (unaff_w24 == unaff_w21) {
      uVar1 = unaff_w21 << 1;
      if (unaff_w25 <= uVar1) {
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar1 = FUN_0500808c(0x7fffffc7,unaff_w21 + 1,0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar7 = *unaff_x27;
      lVar3 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar3 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      plVar4 = (long *)**(long **)(lVar3 + 0xb8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x180));
      auVar8 = FUN_0419fc60(uVar5,*unaff_x28);
      FUN_0419f774(unaff_x29 + -0x20,auVar8._0_8_,auVar8._8_8_,*unaff_x23);
      if (*(long *)(unaff_x29 + -0x10) != 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar7 = *unaff_x27;
        lVar3 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar3 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        plVar4 = (long *)**(long **)(lVar3 + 0xb8);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        (**(code **)(*plVar4 + 0x188))
                  (plVar4,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar4 + 400));
      }
      uVar6 = *unaff_x28;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar5;
      auVar8 = FUN_0419fc60(uVar5,uVar6);
      unaff_w21 = auVar8._8_4_;
      *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar8;
    }
    lVar3 = *unaff_x22;
    if (unaff_w21 < unaff_w24) {
      FUN_05027268(0);
    }
    if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar2 = (**(code **)(*unaff_x19 + 0x358))();
    if (iVar2 == 0) break;
    unaff_w21 = *(uint *)(unaff_x29 + -0x18);
    unaff_w24 = iVar2 + unaff_w24;
  }
  lVar3 = *(long *)PTR_DAT_06771830;
  if (*(uint *)(unaff_x29 + -0x18) < unaff_w24) {
    FUN_05027268(0);
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar6 = *(undefined8 *)PTR_DAT_06779808;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar5;
  *(ulong *)(unaff_x29 + -0x28) = (ulong)unaff_w24;
  uVar5 = FUN_0334b51c(unaff_x29 + -0x30,uVar6);
  FUN_02ca539c(unaff_x29 + -0x40);
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


