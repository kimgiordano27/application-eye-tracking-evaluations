/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 0747929c
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateArray(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w8;
  uint uVar8;
  long *unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long lVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  do {
    uVar8 = in_w8;
    uVar2 = *(uint *)(unaff_x29 + -0x18);
    if (uVar8 == uVar2) {
      uVar2 = uVar8 << 1;
      if (unaff_w21 <= uVar2) {
        if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar2 = FUN_074b6568(0x7fffffc7,uVar8 + 1,0);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar9 = *unaff_x25;
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        goto LAB_07479624;
      }
      uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x180));
      auVar10 = FUN_06053dcc(uVar6,*unaff_x26);
      FUN_060538b8(unaff_x29 + -0x20,auVar10._0_8_,auVar10._8_8_,*unaff_x27);
      if (*(long *)(unaff_x29 + -0x10) != 0) {
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        lVar9 = *unaff_x25;
        lVar4 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f4b260();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f4b260();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        lVar4 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f4b260();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f4b260();
        }
        plVar5 = (long *)**(long **)(lVar4 + 0xb8);
        if (plVar5 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          goto LAB_07479624;
        }
        (**(code **)(*plVar5 + 0x188))
                  (plVar5,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar5 + 400));
      }
      uVar7 = *unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar6;
      auVar10 = FUN_06053dcc(uVar6,uVar7);
      uVar2 = auVar10._8_4_;
      *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar10;
    }
    if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_074d6efc(0);
    }
    if ((*(ushort *)(*(long *)(*unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f4b260();
    }
    if (unaff_x19 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      goto LAB_07479624;
    }
    iVar3 = (**(code **)(*unaff_x19 + 0x368))();
    in_w8 = iVar3 + uVar8;
  } while (iVar3 != 0);
  if (*(uint *)(unaff_x29 + -0x18) < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
  if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_09129940 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  puVar1 = PTR_DAT_09132220;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar8;
  uVar6 = FUN_0488a18c(unaff_x29 + -0x30,*(undefined8 *)puVar1);
  FUN_03e4823c(unaff_x29 + -0x40);
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
LAB_07479624:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


