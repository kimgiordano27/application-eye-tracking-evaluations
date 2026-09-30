/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 07e5c274
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int in_w9;
  long unaff_x21;
  int unaff_w22;
  int iVar6;
  ulong unaff_x23;
  
  do {
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x23) {
      if (unaff_w22 + in_w9 == 0) {
        FUN_07f8b608();
      }
      puVar2 = PTR_DAT_093013d0;
      lVar4 = *(long *)(unaff_x21 + 0x50);
      if (lVar4 != 0) {
        iVar6 = 0;
        goto LAB_07e5c2e8;
      }
      break;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    FUN_07e5dc10();
    param_1 = *(long *)(unaff_x21 + 0x58);
    unaff_x23 = unaff_x23 + 1;
  } while (param_1 != 0);
  goto LAB_07e5c41c;
  while( true ) {
    *(long *)(lVar4 + 0x28) = unaff_x21;
    thunk_FUN_040ec700();
    plVar5 = *(long **)(unaff_x21 + 0x50);
    if (plVar5 == (long *)0x0) break;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,iVar6,*(undefined8 *)(*plVar5 + 0x310));
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar5);
      }
    }
    FUN_07e5bf88();
    lVar4 = *(long *)(unaff_x21 + 0x50);
    iVar6 = iVar6 + 1;
    if (lVar4 == 0) break;
LAB_07e5c2e8:
    iVar3 = FUN_07612250(lVar4,0);
    if (iVar3 <= iVar6) {
      FUN_07e5a2cc();
      FUN_07e5796c();
      FUN_07e5796c();
      return;
    }
    plVar5 = *(long **)(unaff_x21 + 0x50);
    if ((plVar5 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar5 + 0x308))(plVar5,iVar6,*(undefined8 *)(*plVar5 + 0x310)),
       lVar4 == 0)) break;
  }
LAB_07e5c41c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


