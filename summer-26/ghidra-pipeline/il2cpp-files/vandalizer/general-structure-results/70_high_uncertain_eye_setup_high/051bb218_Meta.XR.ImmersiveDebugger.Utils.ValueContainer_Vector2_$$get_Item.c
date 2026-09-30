/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Item
ENTRY_POINT: 051bb218
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Item(void)

{
  bool in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x22;
  
  if (in_ZR) {
LAB_051bb330:
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    FUN_02d65908(*(undefined8 *)(PTR_DAT_0759b388 + 0xe0));
    plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    FUN_02d65918();
    uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    uVar3 = thunk_FUN_03257e30(PTR_DAT_075da578);
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075da580);
    uVar9 = FUN_05c88a70(uVar3,uVar9,uVar4,0);
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar3 = thunk_FUN_0322f148();
    FUN_05e01578(uVar3,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3);
  }
  plVar10 = *(long **)(unaff_x20 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051bb270;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar10,*unaff_x22,0);
LAB_051bb270:
    iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (iVar1 == 1) {
      plVar10 = *(long **)(unaff_x20 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_051bb3d4;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051bb320;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar10,lVar5,0);
LAB_051bb320:
      (*(code *)*puVar2)(plVar10,puVar2[1]);
    }
    else {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_051bb330;
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    return;
  }
LAB_051bb3d4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


