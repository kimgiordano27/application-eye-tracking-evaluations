/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeValue<HalfVector3>
ENTRY_POINT: 03a0e834
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


long * Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeValue<HalfVector3>
                 (ulong param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long lVar8;
  long *unaff_x21;
  uint uVar9;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d88628);
    FUN_0373b518(PTR_DAT_07d88668);
    FUN_0373b518(PTR_DAT_07d886a0);
    FUN_0373b518(PTR_DAT_07d887e8);
    FUN_0373b518(PTR_DAT_07d887f0);
    *(undefined1 *)(unaff_x19 + 0xe56) = 1;
  }
  plVar5 = (long *)thunk_FUN_037788cc(*unaff_x22);
  FUN_03a06de0();
  cVar2 = *(char *)(param_2 + 0x10);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_03a0ee1c(cVar2 != '\0');
  puVar4 = PTR_DAT_07d887f0;
  puVar3 = PTR_DAT_07d88628;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x1b8))
              (plVar5,*(undefined8 *)PTR_DAT_07d887e8,uVar6,*(undefined8 *)(*plVar5 + 0x1c0));
    plVar7 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_03a0af2c();
    (**(code **)(*plVar5 + 0x1b8))
              (plVar5,*(undefined8 *)puVar4,plVar7,*(undefined8 *)(*plVar5 + 0x1c0));
    lVar8 = *(long *)(param_2 + 0x18);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          if ((*(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20) == 0) ||
             (uVar6 = FUN_03a0ee74(), plVar7 == (long *)0x0)) goto LAB_03a0e97c;
          (**(code **)(*plVar7 + 0x288))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x290));
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      return plVar5;
    }
  }
LAB_03a0e97c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


