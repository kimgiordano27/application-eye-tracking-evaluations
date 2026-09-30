/*
FUNCTION_NAME: Sirenix.Serialization.SerializationUtility$$SerializeValue<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022f8994
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022f8ad4) */

undefined1  [16]
Sirenix_Serialization_SerializationUtility__SerializeValue<__Il2CppFullySharedGenericType>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  long *unaff_x24;
  undefined1 auVar8 [16];
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_022f89c0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022f89c0:
        auVar8 = (*(code *)*puVar3)();
        uVar4 = (**(code **)(unaff_x21 + 0x18))
                          (*(undefined8 *)(unaff_x21 + 0x40),auVar8._0_8_,auVar8._8_8_,
                           *(undefined8 *)(unaff_x21 + 0x28));
        if ((uVar4 & 1) != 0) {
          iVar7 = 10;
          iVar2 = 10;
          auVar1 = auVar8;
          if (unaff_x19 == (long *)0x0) goto LAB_022f8a74;
LAB_022f8a14:
          iVar7 = iVar2;
          lVar5 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 == 0) goto LAB_022f8a4c;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_022f8a34;
        }
        lVar5 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_022f894c;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022f894c:
        uVar4 = (*(code *)*puVar3)();
        if ((uVar4 & 1) == 0) {
          auVar8 = ZEXT816(0);
          iVar7 = 0xb;
          iVar2 = 0xb;
          auVar1 = ZEXT816(0);
          if (unaff_x19 != (long *)0x0) goto LAB_022f8a14;
          goto LAB_022f8a74;
        }
        param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
LAB_022f8a34:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_022f8a68;
    }
  }
LAB_022f8a4c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022f8a68:
  (*(code *)*puVar3)();
  auVar1 = auVar8;
LAB_022f8a74:
  if ((iVar7 == 0xb) || (iVar7 == 0)) {
    auVar1 = ZEXT816(0);
  }
  return auVar1;
}


