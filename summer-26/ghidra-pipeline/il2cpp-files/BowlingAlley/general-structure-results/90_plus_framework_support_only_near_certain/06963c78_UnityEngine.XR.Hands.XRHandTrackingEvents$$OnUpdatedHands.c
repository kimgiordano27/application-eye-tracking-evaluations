/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandTrackingEvents$$OnUpdatedHands
ENTRY_POINT: 06963c78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 158
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x069643bc) */

void UnityEngine_XR_Hands_XRHandTrackingEvents__OnUpdatedHands(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator__
                    );
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                    );
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_get_Count__
                    );
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor__
                    );
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_Add__
                    );
  *(undefined1 *)(unaff_x19 + 0xbb5) = 1;
  lVar5 = FUN_06963560();
  puVar4 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__;
  if (lVar5 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_072800c8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072800c8);
    }
    uVar11 = FUN_0394cfe4(uVar11,*(undefined8 *)puVar4);
    if (DAT_076e1cae == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
      DAT_076e1cae = '\x01';
    }
    puVar4 = Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__;
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)
                         Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__ +
                       0xb8) + 0x10);
    *puVar6 = uVar11;
    thunk_FUN_0333a630(puVar6,uVar11);
    if (DAT_076e1cac == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
      DAT_076e1cac = '\x01';
    }
    puVar1 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__;
    FUN_0696475c(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10));
    if (DAT_076e1cab == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
      DAT_076e1cab = '\x01';
    }
    lVar5 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>__ctor__;
    lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add__
                                 );
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (lVar12,uVar13,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator__
                 ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar12;
      thunk_FUN_0333a630(plVar7,lVar12);
    }
    plVar7 = (long *)FUN_0399a7bc(uVar11,lVar12,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0727e5c8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06963e8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_0727e5c8,0);
LAB_06963e8c:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar3 = PTR_DAT_072801f0;
      puVar2 = PTR_DAT_0727e5d0;
      puVar1 = PTR_DAT_0727a180;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
LAB_06963ebc:
      do {
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06963f08;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)puVar1,0);
LAB_06963f08:
        uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto LAB_0696432c;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_06964314;
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06963f64;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)puVar2,0);
LAB_06963f64:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (DAT_076e1cac == '\0') {
          thunk_FUN_032e1da0(puVar4);
          DAT_076e1cac = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar9 = FUN_06964b80(lVar5,uVar11);
        if ((uVar9 & 1) == 0) {
          if (DAT_076e1cac == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cac = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_076e1cab == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cab = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar13 = FUN_069654d8(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_069655f8(lVar12,uVar11,uVar13);
          goto LAB_06963ebc;
        }
        if (DAT_076e1cac == '\0') {
          thunk_FUN_032e1da0(puVar4);
          DAT_076e1cac = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = FUN_069654d8(lVar5,uVar11);
        if (lVar5 == 0) {
          if (DAT_076e1cab == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cab = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar5 = FUN_069654d8(lVar5,uVar11);
          if (lVar5 != 0) {
            if (DAT_076e1cab == '\0') {
              thunk_FUN_032e1da0(puVar4);
              DAT_076e1cab = '\x01';
            }
            lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar5 = FUN_069654d8(lVar5,uVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar13 = thunk_FUN_032f70fc(lVar5,0);
            if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar9 = FUN_06952fbc(uVar13,0);
            if ((uVar9 & 1) == 0) {
              uVar11 = FUN_057aaeec(*(undefined8 *)
                                     Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_Add__
                                    ,uVar11,*(undefined8 *)
                                             Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_get_Count__
                                    ,0);
              if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              FUN_06bb2f68(uVar11,0);
              goto LAB_06963ebc;
            }
          }
          if (DAT_076e1cac == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cac = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_076e1cab == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cab = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar13 = FUN_069654d8(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_069655f8(lVar12,uVar11,uVar13);
          goto LAB_06963ebc;
        }
        if (DAT_076e1cab == '\0') {
          thunk_FUN_032e1da0(puVar4);
          DAT_076e1cab = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar13 = FUN_069654d8(lVar5,uVar11);
        if (DAT_076e1cac == '\0') {
          thunk_FUN_032e1da0(puVar4);
          DAT_076e1cac = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = FUN_069654d8(lVar5,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar8 = thunk_FUN_032f70fc(lVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar9 = FUN_068bddd4(uVar13,uVar8,1,0);
        if ((uVar9 & 1) == 0) {
          if (DAT_076e1cac == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cac = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar5 = FUN_069654d8(lVar5,uVar11);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar13 = thunk_FUN_032f70fc(lVar5,0);
          uVar11 = FUN_057ab61c(*(undefined8 *)
                                 Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor__
                                ,uVar11,uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bb2f68(uVar11,0);
        }
        else {
          if (DAT_076e1cac == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cac = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_076e1cab == '\0') {
            thunk_FUN_032e1da0(puVar4);
            DAT_076e1cab = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar13 = FUN_069654d8(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_069655f8(lVar12,uVar11,uVar13);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06964314:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06964348;
    }
  }
LAB_0696432c:
  puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_07279f60,0);
LAB_06964348:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


