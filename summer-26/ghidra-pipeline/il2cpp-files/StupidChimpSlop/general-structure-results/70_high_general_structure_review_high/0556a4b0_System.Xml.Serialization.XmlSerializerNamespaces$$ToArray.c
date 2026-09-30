/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 0556a4b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(void)

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
  
  uVar6 = thunk_FUN_04e7e884();
  puVar3 = PTR_DAT_0664f1f0;
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(unaff_x20 + 0x10) = 2;
    lVar7 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                    /* try { // try from 0556a4fc to 0566a50b has its CatchHandler @ 0556a580 */
    FUN_04fb3d48(lVar7,0);
    plVar11 = (long *)(unaff_x20 + 0x18);
    *plVar11 = lVar7;
    thunk_FUN_02dc1ef0(plVar11,lVar7);
    puVar3 = UnityEngine_InputSystem_Controls_DpadControl_var;
                    /* try { // try from 0556a51c to 0566a527 has its CatchHandler @ 0556a578 */
                    /* try { // try from 0556a528 to 0566a573 has its CatchHandler @ 0556a310 */
    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar7 = FUN_056600f8();
    puVar5 = Mono_Security_PKCS7_ContentInfo_TypeInfo;
    puVar4 = 
    System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_TypeInfo;
    puVar2 = PTR_DAT_066462a0;
    if (lVar7 == 0) {
LAB_0556a66c:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar6 = 0;
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      lVar1 = lVar7 + 0x20;
      do {
                    /* try { // try from 0556a574 to 0566a577 has its CatchHandler @ 0556a57c */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0556a51c with catch @ 0556a578
                       try { // try from 0556a578 to 0566a59b has its CatchHandler @ 0556a310 */
        if (uVar9 <= uVar6) goto LAB_0556a668;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0556a574 with catch @ 0556a57c
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0556a4fc with catch @ 0556a580
                        */
        uVar9 = thunk_FUN_04e7e884(*(undefined8 *)(lVar1 + uVar6 * 8),*(undefined8 *)puVar5,0);
        if ((uVar9 & 1) == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_0556a668;
          uVar9 = thunk_FUN_04e7e884(*(undefined8 *)(lVar1 + uVar6 * 8),*(undefined8 *)puVar4,0);
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_0556a668:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            uVar12 = *(undefined8 *)(lVar1 + uVar6 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0565fb78(uVar12,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_0556a668;
            if ((long *)*plVar11 == (long *)0x0) goto LAB_0556a66c;
            pcVar10 = *(code **)(*(long *)*plVar11 + 0x318);
          }
          else {
            if ((long *)*plVar11 == (long *)0x0) goto LAB_0556a66c;
            pcVar10 = *(code **)(*(long *)*plVar11 + 0x318);
          }
          (*pcVar10)();
        }
        else {
          plVar8 = (long *)*plVar11;
          if (plVar8 == (long *)0x0) goto LAB_0556a66c;
                    /* try { // try from 0556a59c to 0566a59f has its CatchHandler @ 0556a5a8 */
          (**(code **)(*plVar8 + 0x318))
                    (plVar8,**(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8),
                     **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8),
                     *(undefined8 *)(*plVar8 + 800));
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


