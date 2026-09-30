/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 07479430
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x19;
  ulong uVar7;
  undefined8 unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined1 auVar9 [16];
  
  do {
    (**(code **)(*param_1 + 0x188))
              (param_1,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*param_1 + 400));
    do {
      uVar6 = *unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
      auVar9 = FUN_06053dcc(unaff_x20,uVar6);
      uVar7 = auVar9._8_8_;
      *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar9;
      uVar2 = unaff_w28;
      do {
        if ((uint)uVar7 < uVar2) {
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
        unaff_w28 = iVar3 + uVar2;
        if (iVar3 == 0) {
          if (*(uint *)(unaff_x29 + -0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_074d6efc(0);
          }
          uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
          if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_09129940 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f4b260();
          }
          puVar1 = PTR_DAT_09132220;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
          *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar2;
          uVar6 = FUN_0488a18c(unaff_x29 + -0x30,*(undefined8 *)puVar1);
          FUN_03e4823c(unaff_x29 + -0x40);
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
            return uVar6;
          }
          goto LAB_07479624;
        }
        uVar7 = (ulong)*(uint *)(unaff_x29 + -0x18);
        uVar2 = unaff_w28;
      } while (unaff_w28 != *(uint *)(unaff_x29 + -0x18));
      uVar2 = unaff_w28 * 2;
      if (unaff_w21 <= uVar2) {
        if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar2 = FUN_074b6568(0x7fffffc7,unaff_w28 + 1,0);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar8 = *unaff_x25;
      lVar4 = *(long *)(lVar8 + 0x20);
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
      lVar4 = *(long *)(lVar8 + 0x20);
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
      unaff_x20 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x180));
      auVar9 = FUN_06053dcc(unaff_x20,*unaff_x26);
      FUN_060538b8(unaff_x29 + -0x20,auVar9._0_8_,auVar9._8_8_,*unaff_x27);
    } while (*(long *)(unaff_x29 + -0x10) == 0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    lVar8 = *unaff_x25;
    lVar4 = *(long *)(lVar8 + 0x20);
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
    lVar4 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f4b260();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f4b260();
    }
    param_1 = (long *)**(long **)(lVar4 + 0xb8);
    if (param_1 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
LAB_07479624:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


