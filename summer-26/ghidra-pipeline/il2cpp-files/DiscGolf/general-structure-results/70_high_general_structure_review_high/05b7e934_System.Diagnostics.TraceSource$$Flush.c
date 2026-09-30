/*
FUNCTION_NAME: System.Diagnostics.TraceSource$$Flush
ENTRY_POINT: 05b7e934
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_11;strong_file_logging_hits_2
*/


void System_Diagnostics_TraceSource__Flush(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x40) = **(undefined8 **)(param_1 + 0x430);
  LeanTween__value((undefined8 *)(unaff_x20 + 0x40));
  puVar2 = Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TryGetValue__;
  if (5 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x48) =
         *(undefined8 *)
          Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TryGetValue__;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x48));
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_set_Item__
      ;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x50));
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>__ctor__;
        LeanTween__value((undefined8 *)(unaff_x19 + 0x58));
        if (8 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_06a122f8;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x60));
          puVar1 = System_Xml_Schema_XmlSchemaImport_TypeInfo;
          if (9 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x68) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_set_Item__
            ;
            LeanTween__value();
            **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
            LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
            lVar5 = FUN_02d966a4(*unaff_x21,0xe);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x20) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<FieldInfo,_Instruction>_TryGetValue__
              ;
              LeanTween__value((undefined8 *)(lVar5 + 0x20));
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar5 + 0x28) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_get_Values__
                ;
                LeanTween__value((undefined8 *)(lVar5 + 0x28));
                if (2 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x30) =
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>__ctor__
                  ;
                  LeanTween__value((undefined8 *)(lVar5 + 0x30));
                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar5 + 0x38) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_Clear__
                    ;
                    LeanTween__value((undefined8 *)(lVar5 + 0x38));
                    if (4 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x40) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_Remove__
                      ;
                      LeanTween__value((undefined8 *)(lVar5 + 0x40));
                      if (5 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x48) =
                             *(undefined8 *)
                              Method_System_Xml_ArrayHelper<XmlDictionaryString,_long>__ctor__;
                        LeanTween__value((undefined8 *)(lVar5 + 0x48));
                        if (6 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x50) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_set_Item__
                          ;
                    /* try { // try from 05b7eb54 to 05c7eb7b has its CatchHandler @ 05b7ec80 */
                          LeanTween__value((undefined8 *)(lVar5 + 0x50));
                          if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined8 *)(lVar5 + 0x58) =
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                            ;
                            LeanTween__value((undefined8 *)(lVar5 + 0x58));
                            if (8 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x60) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_Clear__
                              ;
                              LeanTween__value((undefined8 *)(lVar5 + 0x60));
                              if (9 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 05b7ebb8 to 05c7ebe7 has its CatchHandler @ 05b7ec7c */
                                *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)puVar2;
                                LeanTween__value((undefined8 *)(lVar5 + 0x68));
                                if (10 < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x70) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>__ctor__
                                  ;
                    /* try { // try from 05b7ebe8 to 05c7ebef has its CatchHandler @ 05b7ec70 */
                                  LeanTween__value((undefined8 *)(lVar5 + 0x70));
                    /* try { // try from 05b7ebf0 to 05c7ec67 has its CatchHandler @ 05b7e8f4 */
                                  if (0xb < *(uint *)(lVar5 + 0x18)) {
                                    *(undefined8 *)(lVar5 + 0x78) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_TryGetValue__
                                    ;
                                    LeanTween__value((undefined8 *)(lVar5 + 0x78));
                                    if (0xc < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x80) =
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>__ctor__
                                      ;
                                      LeanTween__value((undefined8 *)(lVar5 + 0x80));
                                      puVar4 = 
                                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                      ;
                                      puVar3 = 
                                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>__ctor__
                                      ;
                                      puVar2 = 
                                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__
                                      ;
                                      if (0xd < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 05b7ec68 to 05c7ec6b has its CatchHandler @ 05b7ec78 */
                    /* try { // try from 05b7ec6c to 05c7ec6f has its CatchHandler @ 05b7ec74 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7ebe8 with catch @ 05b7ec70
                       try { // try from 05b7ec70 to 05c7ec9b has its CatchHandler @ 05b7e8f4 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7ec6c with catch @ 05b7ec74
                        */
                                        *(undefined8 *)(lVar5 + 0x88) =
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_get_Count__
                                        ;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7ec68 with catch @ 05b7ec78
                        */
                                        LeanTween__value();
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7ebb8 with catch @ 05b7ec7c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7eb54 with catch @ 05b7ec80
                        */
                                        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                        *plVar6 = lVar5;
                                        LeanTween__value(plVar6,lVar5);
                                        uVar7 = FUN_02d966a4(*(undefined8 *)puVar2,0x68);
                    /* try { // try from 05b7ec9c to 05c7ec9f has its CatchHandler @ 05b7ecbc */
                    /* try { // try from 05b7eca0 to 05c7ecbf has its CatchHandler @ 05b7e8f4 */
                                        FUN_05411dc0(uVar7,*(undefined8 *)puVar4,0);
                                        puVar8 = (undefined8 *)
                                                 (*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                                        *puVar8 = uVar7;
                    /* catch() { ... } // from try @ 05b7ec9c with catch @ 05b7ecbc */
                                        LeanTween__value(puVar8,uVar7);
                    /* try { // try from 05b7ecc0 to 05c7ecc7 has its CatchHandler @ 05b7ecd0 */
                    /* try { // try from 05b7ecc8 to 05c7ecd3 has its CatchHandler @ 05b7e8f4 */
                                        uVar7 = FUN_02d966a4(*(undefined8 *)puVar2,0x68);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05b7ecc0 with catch @ 05b7ecd0
                        */
                                        FUN_05411dc0(uVar7,*(undefined8 *)puVar3,0);
                                        puVar8 = (undefined8 *)
                                                 (*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                                        *puVar8 = uVar7;
                                        LeanTween__value(puVar8,uVar7);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


