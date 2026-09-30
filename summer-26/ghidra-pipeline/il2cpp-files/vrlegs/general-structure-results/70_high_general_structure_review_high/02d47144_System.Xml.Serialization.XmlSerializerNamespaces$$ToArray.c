/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 02d47144
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  while (param_1 != 0) {
    FUN_02d806bc(param_1,0);
    if (unaff_x22[0x10] == 0) break;
    FUN_02d806bc(unaff_x22[0x10],0);
    if (unaff_x22[0xf] == 0) break;
    FUN_02d806bc(unaff_x22[0xf],0);
    do {
      unaff_w21 = unaff_w21 + 1;
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_02d47240;
      iVar3 = FUN_027295ec(*(long *)(unaff_x19 + 0x58),0);
      if (iVar3 <= unaff_w21) {
        lVar5 = FUN_02d77da0();
        if (lVar5 != 0) {
          FUN_02d806bc(lVar5,0);
          lVar5 = FUN_02d77e10();
                    /* try { // try from 02d471a4 to 02e4722f has its CatchHandler @ 02d471a4
                       catch() { ... } // from try @ 02d471a4 with catch @ 02d471a4
                       catch() { ... } // from try @ 02d4724c with catch @ 02d471a4
                       catch() { ... } // from try @ 02d47364 with catch @ 02d471a4
                       catch() { ... } // from try @ 02d4740c with catch @ 02d471a4 */
          if (lVar5 != 0) {
            FUN_02d806bc(lVar5,0);
            lVar5 = FUN_02d77e80();
            if (lVar5 != 0) {
              FUN_02d806bc(lVar5,0);
              lVar5 = FUN_02d77ef0();
              if (lVar5 != 0) {
                FUN_02d806bc(lVar5,0);
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  FUN_02d806bc(*(long *)(unaff_x19 + 0xa0),0);
                  if (*(long *)(unaff_x19 + 0xa8) != 0) {
                    FUN_02d806bc(*(long *)(unaff_x19 + 0xa8),0);
                    plVar4 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar4 != (long *)0x0) {
                      (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0));
                      if (*(long *)(unaff_x19 + 0xb0) != 0) {
                        FUN_02d806bc(*(long *)(unaff_x19 + 0xb0),0);
                        *(undefined1 *)(unaff_x19 + 0x30) = 0;
                    /* try { // try from 02d47230 to 02e4723b has its CatchHandler @ 02d47374 */
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_02d47240;
      }
      plVar4 = *(long **)(unaff_x19 + 0x58);
      if ((plVar4 == (long *)0x0) ||
         (unaff_x22 = (long *)(**(code **)(*plVar4 + 0x308))
                                        (plVar4,unaff_w21,*(undefined8 *)(*plVar4 + 0x310)),
         unaff_x22 == (long *)0x0)) goto LAB_02d47240;
      lVar5 = *unaff_x22;
      bVar1 = *(byte *)(lVar5 + 0x130);
      bVar2 = *(byte *)(*unaff_x23 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x22);
      }
      if (unaff_x22[9] != 0) {
        FUN_02d47030();
        lVar5 = *unaff_x22;
        bVar1 = *(byte *)(lVar5 + 0x130);
      }
      bVar2 = *(byte *)(*unaff_x24 + 0x130);
    } while ((bVar1 < bVar2) ||
            (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24));
    param_1 = unaff_x22[0xe];
  }
LAB_02d47240:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02d47240 to 02e4724b has its CatchHandler @ 02d47370 */
  FUN_01ab6c3c();
}


