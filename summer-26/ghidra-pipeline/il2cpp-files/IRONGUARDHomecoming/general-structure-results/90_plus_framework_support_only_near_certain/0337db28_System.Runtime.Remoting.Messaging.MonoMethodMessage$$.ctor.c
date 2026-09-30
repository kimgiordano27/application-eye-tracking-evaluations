/*
FUNCTION_NAME: System.Runtime.Remoting.Messaging.MonoMethodMessage$$.ctor
ENTRY_POINT: 0337db28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0337e028) */

undefined4 System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar12;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (lVar3 = (*param_1)(), unaff_x23 != (long *)0x0) {
                    /* try { // try from 0337db3c to 0347db3f has its CatchHandler @ 0337db4c */
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,0);
    }
                    /* catch() { ... } // from try @ 0337db3c with catch @ 0337db4c */
    uVar11 = (uint)unaff_x19;
    if (*(uint *)(unaff_x23 + 3) <= uVar11) {
LAB_0337e014:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar12 = unaff_x23 + unaff_x19 + 4;
    *plVar12 = lVar3;
    thunk_FUN_01f51358(plVar12,lVar3);
    if (*(uint *)(unaff_x23 + 3) <= uVar11) goto LAB_0337e014;
    if (*plVar12 == 0) {
      plVar12 = *(long **)(unaff_x21 + 0x18);
      if (plVar12 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        plVar12 = *(long **)(unaff_x21 + 0x10);
        if (plVar12 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar12 + 0x2e8))(plVar12,*(undefined8 *)(*plVar12 + 0x2f0));
          plVar12 = *(long **)(unaff_x21 + 0x18);
          if (plVar12 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            puVar1 = Method_UnityEngine_GameObject_GetComponent<LineRenderer>__;
            uVar9 = FUN_0340f334(*(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponent<LineRenderer>__,uVar9,
                                 uVar8,unaff_x24,0);
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                      );
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar9,0);
            FUN_0337d514(in_stack_00000010,uVar6,uVar8);
            plVar12 = *(long **)(unaff_x21 + 0x10);
            if (plVar12 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar12 + 0x2e8))(plVar12,*(undefined8 *)(*plVar12 + 0x2f0));
              plVar12 = *(long **)(unaff_x21 + 0x18);
              if (plVar12 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
                uVar6 = FUN_0340f334(*(undefined8 *)puVar1,uVar6,uVar9,unaff_x24,0);
                FUN_033a2f1c(uVar6,0);
                return 0;
              }
            }
          }
        }
      }
      break;
    }
                    /* try { // try from 0337db84 to 0347dbab has its CatchHandler @ 0337dbc0 */
    uVar11 = uVar11 + 1;
    if (*(int *)(unaff_x25 + 0x18) <= (int)uVar11) {
      uVar5 = FUN_034b2ac0(in_stack_00000018,0);
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 0337dbac to 0347dbb7 has its CatchHandler @ 0337d848 */
                    /* try { // try from 0337dbb8 to 0347dbbf has its CatchHandler @ 0337dbc0 */
        uVar6 = FUN_02308ab0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0337db84 with catch @ 0337dbc0
                       catch(type#2 @ 00000000) { ... } // from try @ 0337dbb8 with catch @ 0337dbc0
                        */
        FUN_034b2bf4(in_stack_00000018,0,uVar6,0);
        return 1;
      }
      plVar12 = *(long **)(in_stack_00000010 + 0x20);
      if (plVar12 != (long *)0x0) {
        lVar3 = *plVar12;
        uVar6 = *(undefined8 *)(unaff_x21 + 0x10);
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_0337dc20;
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0337dc08;
      }
      break;
    }
    unaff_x24 = thunk_FUN_01f117cc(*unaff_x29);
    FUN_03416d98(unaff_x24,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar11) goto LAB_0337e014;
    if (unaff_x22 == (long *)0x0) break;
    lVar3 = *unaff_x22;
    unaff_x19 = (long)(int)uVar11;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x20) {
          puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0337db14;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0337db14:
    param_1 = (code *)*puVar7;
  }
  goto LAB_0337e130;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_0337dfac:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0337dfe0;
    }
  }
LAB_0337dfc4:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0337dfe0:
  (*(code *)*puVar7)(plVar12,puVar7[1]);
  return 1;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_0337dc08:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_UnityEngine_GameObject_GetComponent<Interactable>__) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0337dd48;
    }
  }
LAB_0337dc20:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)Method_UnityEngine_GameObject_GetComponent<Interactable>__,
                        0);
LAB_0337dd48:
  plVar12 = (long *)(*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
  if (plVar12 != (long *)0x0) {
    lVar3 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_UnityEngine_GameObject_GetComponent<Image>__)
        {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0337ddbc;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)Method_UnityEngine_GameObject_GetComponent<Image>__,0);
LAB_0337ddbc:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    puVar2 = Method_UnityEngine_GameObject_GetComponent<InputField>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0337de48;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_0337de48:
      uVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar12 == (long *)0x0) {
          return 1;
        }
        lVar3 = *plVar12;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_0337dfc4;
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0337dfac;
      }
      lVar3 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_0337dea4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
FUN_0337dea4:
      uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar9 = FUN_02308ab0();
      FUN_034b2bf4(in_stack_00000018,uVar6,uVar9,0);
    } while( true );
  }
LAB_0337e130:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


