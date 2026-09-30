/*
FUNCTION_NAME: Unity.Entities.Serialization.StreamBinaryWriter$$Dispose
ENTRY_POINT: 030c81cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_Serialization_StreamBinaryWriter__Dispose
               (ulong param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x21;
  long *plVar7;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TypeInfo
                );
    *(undefined1 *)(unaff_x21 + 0x6e7) = 1;
  }
  if (DAT_0411f81c == '\0') {
    FUN_01ab69ac(PTR_DAT_03cc44a8);
    DAT_0411f81c = '\x01';
  }
  plVar7 = (long *)*param_3;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar1 = *(undefined2 *)(param_3 + 1);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03cc44a8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_030c8274;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cc44a8,2);
LAB_030c8274:
    (*(code *)*puVar3)(plVar7,uVar1,puVar3[1]);
  }
  if (param_2 != 0) {
    iVar2 = FusionStats__get_GraphColorBad(param_2 + 0x10,0);
    if (iVar2 == 1) {
      uStack000000000000000c = param_4;
      FUN_020d1e1c(param_2 + 0x18,&stack0x0000000c,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TypeInfo
                  );
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


