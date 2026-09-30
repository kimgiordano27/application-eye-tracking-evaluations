/*
FUNCTION_NAME: FUN_03ea0014
ENTRY_POINT: 03ea0014
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void FUN_03ea0014(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
                    /* try { // try from 03ea001c to 03fa0023 has its CatchHandler @ 03ea0068 */
                    /* try { // try from 03ea0030 to 03fa003b has its CatchHandler @ 03ea0070 */
  if ((DAT_0483ab2e & 1) == 0) {
                    /* try { // try from 03ea003c to 03fa005f has its CatchHandler @ 03e9fe34 */
    thunk_FUN_01efb3a4(PTR_DAT_0457b538);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
                    /* try { // try from 03ea0060 to 03fa0063 has its CatchHandler @ 03ea0074 */
                    /* try { // try from 03ea0064 to 03fa0067 has its CatchHandler @ 03ea0078 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea001c with catch @ 03ea0068
                       try { // try from 03ea0068 to 03fa008f has its CatchHandler @ 03e9fe34 */
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03e9fff0 with catch @ 03ea006c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03e9ffd0 with catch @ 03ea0070
                       catch(type#1 @ 042b3198) { ... } // from try @ 03ea0030 with catch @ 03ea0070
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03e9ff4c with catch @ 03ea0074
                       catch(type#1 @ 042b3198) { ... } // from try @ 03ea0060 with catch @ 03ea0074
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03e9ff84 with catch @ 03ea0078
                       catch(type#1 @ 042b3198) { ... } // from try @ 03ea0064 with catch @ 03ea0078
                        */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
                    /* try { // try from 03ea0090 to 03fa0093 has its CatchHandler @ 03ea00b4 */
                    /* try { // try from 03ea0094 to 03fa00b7 has its CatchHandler @ 03e9fe34 */
    DAT_0483ab2e = 1;
  }
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  auVar13 = FUN_03416d98(plVar5,0);
  puVar2 = PTR_DAT_0457b538;
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03ea0090 with catch @ 03ea00b4 */
                    /* try { // try from 03ea00b8 to 03fa00c3 has its CatchHandler @ 03ea00d8 */
                    /* try { // try from 03ea00c4 to 03fa00cf has its CatchHandler @ 03e9fe34 */
    FUN_03418748(plVar5,*(undefined8 *)
                         Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                 ,0);
                    /* try { // try from 03ea00d0 to 03fa00d7 has its CatchHandler @ 03ea00d8 */
    uVar12 = *(undefined8 *)(param_1 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ea00b8 with catch @ 03ea00d8
                       catch(type#2 @ 00000000) { ... } // from try @ 03ea00d0 with catch @ 03ea00d8
                        */
    plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                    /* try { // try from 03ea00dc to 03fa0177 has its CatchHandler @ 03ea00dc
                       catch() { ... } // from try @ 03ea00dc with catch @ 03ea00dc
                       catch() { ... } // from try @ 03ea0184 with catch @ 03ea00dc
                       catch() { ... } // from try @ 03ea0208 with catch @ 03ea00dc
                       catch() { ... } // from try @ 03ea0238 with catch @ 03ea00dc */
    auVar13 = FUN_03e9ef14(plVar6,uVar12,1);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03ea0144;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03ea0144:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar10 & 1) == 0) {
LAB_03ea03a8:
        FUN_03418748(plVar5,*(undefined8 *)
                             Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                     ,0);
                    /* WARNING: Could not recover jumptable at 0x03ea03dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03ea01a4;
          }
                    /* try { // try from 03ea0178 to 03fa0183 has its CatchHandler @ 03ea01ec */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 03ea0184 to 03fa0203 has its CatchHandler @ 03ea00dc */
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,1);
LAB_03ea01a4:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar9 == 0) {
                    /* try { // try from 03ea0204 to 03fa0207 has its CatchHandler @ 03ea0228 */
                    /* try { // try from 03ea0208 to 03fa022b has its CatchHandler @ 03ea00dc */
        uVar8 = *(undefined8 *)
                 Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
        uVar12 = 0;
      }
      else {
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03ea0220;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea0178 with catch @ 03ea01ec
                        */
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,1);
LAB_03ea0220:
                    /* catch() { ... } // from try @ 03ea0204 with catch @ 03ea0228 */
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 03ea022c to 03fa0237 has its CatchHandler @ 03ea024c */
        uVar8 = uVar12;
      }
      auVar13._8_8_ = uVar8;
      auVar13._0_8_ = uVar12;
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 03ea0238 to 03fa0243 has its CatchHandler @ 03ea00dc */
        FUN_034191b8(plVar5,uVar8,0);
        puVar4 = Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
        puVar3 = 
        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
        ;
                    /* try { // try from 03ea0244 to 03fa024b has its CatchHandler @ 03ea024c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ea022c with catch @ 03ea024c
                       catch(type#2 @ 00000000) { ... } // from try @ 03ea0244 with catch @ 03ea024c
                        */
        do {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03ea02a0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03ea02a0:
          uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar10 & 1) == 0) goto LAB_03ea03a8;
          FUN_03418748(plVar5,*(undefined8 *)puVar3,0);
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03ea0310;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,1);
LAB_03ea0310:
          lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar9 == 0) {
            uVar10 = *(ulong *)puVar4;
          }
          else {
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_03ea0384;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,1);
LAB_03ea0384:
            uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar10;
          auVar13 = auVar1 << 0x40;
          if (plVar5 == (long *)0x0) break;
          FUN_034191b8(plVar5,uVar10,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(auVar13._0_8_,auVar13._8_8_);
}


