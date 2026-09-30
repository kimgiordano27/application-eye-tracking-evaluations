/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 07b0ce98
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar6;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x27 + 0x818);
  uVar6 = 0;
  param_1 = param_1 & 0xffffffff;
  lVar1 = unaff_x21 + 0x20;
  do {
    if (param_1 <= uVar6) goto LAB_07b0cf9c;
    uVar2 = thunk_FUN_0732565c(*(undefined8 *)(lVar1 + uVar6 * 8),*unaff_x25,0);
    if ((uVar2 & 1) == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07b0cf9c;
      uVar2 = thunk_FUN_0732565c(*(undefined8 *)(lVar1 + uVar6 * 8),*puVar7,0);
      if ((uVar2 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) {
LAB_07b0cf9c:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        uVar4 = *(undefined8 *)(lVar1 + uVar6 * 8);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        FUN_07c02578(uVar4,0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07b0cf9c;
        if ((long *)*unaff_x20 == (long *)0x0) goto LAB_07b0cfa0;
        pcVar5 = *(code **)(*(long *)*unaff_x20 + 0x318);
      }
      else {
        if ((long *)*unaff_x20 == (long *)0x0) goto LAB_07b0cfa0;
        pcVar5 = *(code **)(*(long *)*unaff_x20 + 0x318);
      }
      (*pcVar5)();
    }
    else {
      plVar3 = (long *)*unaff_x20;
      if (plVar3 == (long *)0x0) {
LAB_07b0cfa0:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar4 = **(undefined8 **)(*(long *)(unaff_x26 + 0x90) + 0xb8);
      (**(code **)(*plVar3 + 0x318))(plVar3,uVar4,uVar4,*(undefined8 *)(*plVar3 + 800));
    }
    param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
    uVar6 = uVar6 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)uVar6) {
      return;
    }
  } while( true );
}


