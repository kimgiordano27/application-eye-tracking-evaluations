/*
FUNCTION_NAME: Sirenix.Serialization.SerializationUtility$$SerializeValue<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022f8c74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022f8e40) */

undefined1  [16]
Sirenix_Serialization_SerializationUtility__SerializeValue<__Il2CppFullySharedGenericType>(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  long unaff_x21;
  long *unaff_x22;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  
  do {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_022f8cc0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022f8cc0:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      iVar7 = 0xb;
      iVar6 = 0xb;
      uVar9 = 0;
      uVar10 = 0;
      goto joined_r0x022f8d7c;
    }
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_022f8d34;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022f8d34:
    auVar8 = (*(code *)*puVar1)();
    uVar10 = auVar8._8_8_;
    uVar9 = auVar8._0_8_;
    uVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),*(undefined8 *)(unaff_x21 + 0x28));
  } while ((uVar4 & 1) == 0);
  iVar7 = 10;
  iVar6 = 10;
joined_r0x022f8d7c:
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_022f8dd4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022f8dd4:
    (*(code *)*puVar1)();
    iVar6 = iVar7;
  }
  if ((iVar6 == 0xb) || (iVar6 == 0)) {
    uVar9 = 0;
    uVar10 = 0;
  }
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = uVar9;
  return auVar8;
}


