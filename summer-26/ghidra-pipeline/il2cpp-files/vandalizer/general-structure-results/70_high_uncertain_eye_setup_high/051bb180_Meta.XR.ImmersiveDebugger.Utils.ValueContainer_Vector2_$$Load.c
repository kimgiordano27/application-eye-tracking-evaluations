/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 051bb180
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x21;
  long *plVar11;
  
  if ((*(byte *)(unaff_x21 + 0x441) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075da568);
    *(undefined1 *)(unaff_x21 + 0x441) = 1;
  }
  puVar1 = PTR_DAT_075da568;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075da568) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051bb208;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075da568,0);
LAB_051bb208:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (iVar2 == 2) goto LAB_051bb330;
      plVar11 = *(long **)(param_1 + 0x20);
      if (plVar11 == (long *)0x0) {
LAB_051bb3d4:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051bb270;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar1,0);
LAB_051bb270:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (iVar2 == 1) {
        plVar11 = *(long **)(param_1 + 0x20);
        if (plVar11 != (long *)0x0) {
          lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0322bef4(lVar6);
          }
          lVar7 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_051bb320;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0322c1e8(plVar11,lVar6,0);
LAB_051bb320:
          (*(code *)*puVar3)(plVar11,puVar3[1]);
          return;
        }
        goto LAB_051bb3d4;
      }
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) {
LAB_051bb330:
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
      FUN_02d65908(*(undefined8 *)(PTR_DAT_0759b388 + 0xe0));
      plVar11 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      FUN_02d65918();
      uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075da578);
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075da580);
      uVar10 = FUN_05c88a70(uVar4,uVar10,uVar5,0);
      thunk_FUN_03257e30(PTR_DAT_0759bb58);
      uVar4 = thunk_FUN_0322f148();
      FUN_05e01578(uVar4,uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar4,param_2);
    }
  }
  (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  return;
}


