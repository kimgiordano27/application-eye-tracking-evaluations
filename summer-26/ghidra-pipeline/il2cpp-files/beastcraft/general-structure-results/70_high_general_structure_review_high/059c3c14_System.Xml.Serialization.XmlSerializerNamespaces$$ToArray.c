/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 059c3c14
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  
  uVar6 = thunk_FUN_0548b788(param_2,*param_1);
  puVar3 = PTR_DAT_06a7c8e0;
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(unaff_x20 + 0x10) = 2;
    lVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_055b4008(lVar7,0);
    plVar11 = (long *)(unaff_x20 + 0x18);
    *plVar11 = lVar7;
    thunk_FUN_02ee2be8(plVar11,lVar7);
    puVar3 = PTR_DAT_06a8a148;
    if (*(int *)(*(long *)PTR_DAT_06a8a148 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar7 = FUN_05ab9870();
    puVar5 = PTR_DAT_06a983b0;
    puVar4 = PTR_DAT_06a983a0;
    puVar2 = PTR_DAT_06a2f000;
    if (lVar7 == 0) {
LAB_059c3dd4:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar6 = 0;
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      lVar1 = lVar7 + 0x20;
      do {
        if (uVar9 <= uVar6) goto LAB_059c3dd0;
        uVar9 = thunk_FUN_0548b788(*(undefined8 *)(lVar1 + uVar6 * 8),*(undefined8 *)puVar5,0);
        if ((uVar9 & 1) == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_059c3dd0;
          uVar9 = thunk_FUN_0548b788(*(undefined8 *)(lVar1 + uVar6 * 8),*(undefined8 *)puVar4,0);
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_059c3dd0:
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            uVar12 = *(undefined8 *)(lVar1 + uVar6 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_05ab92f0(uVar12,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_059c3dd0;
            if ((long *)*plVar11 == (long *)0x0) goto LAB_059c3dd4;
            pcVar10 = *(code **)(*(long *)*plVar11 + 0x308);
          }
          else {
            if ((long *)*plVar11 == (long *)0x0) goto LAB_059c3dd4;
            pcVar10 = *(code **)(*(long *)*plVar11 + 0x308);
          }
          (*pcVar10)();
        }
        else {
          plVar8 = (long *)*plVar11;
          if (plVar8 == (long *)0x0) goto LAB_059c3dd4;
          (**(code **)(*plVar8 + 0x308))
                    (plVar8,**(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8),
                     **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8),
                     *(undefined8 *)(*plVar8 + 0x310));
        }
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
  }
  else {
    *(undefined4 *)(unaff_x20 + 0x10) = 1;
  }
  return;
}


