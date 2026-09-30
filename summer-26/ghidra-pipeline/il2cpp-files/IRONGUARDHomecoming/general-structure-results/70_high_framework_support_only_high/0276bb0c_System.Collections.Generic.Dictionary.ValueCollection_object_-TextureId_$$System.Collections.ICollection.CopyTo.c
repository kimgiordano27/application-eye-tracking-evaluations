/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-TextureId>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 0276bb0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276be20) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_TextureId>__System_Collections_ICollection_CopyTo
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
code_r0x0276bb0c:
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x18) = param_1;
  (*(code *)param_3[2])(param_2);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
  lVar11 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
joined_r0x0276bb3c:
  if (lVar11 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 0276bb54 to 0286bb57 has its CatchHandler @ 0276bb7c */
                    /* try { // try from 0276bb58 to 0286bb6b has its CatchHandler @ 0276bb88 */
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      thunk_FUN_01f51358();
    }
    else {
                    /* try { // try from 0276bb6c to 0286bb9f has its CatchHandler @ 0276b760 */
      FUN_030f2bb4();
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276bb54 with catch @ 0276bb7c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276ba74 with catch @ 0276bb80
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276bae8 with catch @ 0276bb84
                        */
    iVar1 = *(int *)(unaff_x29 + -0x24) + 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276bb58 with catch @ 0276bb88
                        */
    *(int *)(unaff_x29 + -0x24) = iVar1;
    iVar6 = (**(code **)(*unaff_x20 + 0x618))();
                    /* try { // try from 0276bba0 to 0286bbb7 has its CatchHandler @ 0276bbec */
    if (iVar1 < iVar6) {
      iVar1 = *(int *)(unaff_x29 + -0x24);
      unaff_x24 = FUN_035683d0(unaff_x29 + -0x24,0);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if (iVar1 != 0) goto code_r0x0276ba3c;
      uVar9 = (*(code *)**(undefined8 **)(lVar11 + 0x18))();
      lVar11 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      goto joined_r0x0276bb3c;
    }
                    /* try { // try from 0276bbdc to 0286bbeb has its CatchHandler @ 0276bbec */
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) ==
        0) {
      FUN_01ecaf44();
    }
    thunk_FUN_01f117cc();
                    /* catch() { ... } // from try @ 0276bba0 with catch @ 0276bbec
                       catch() { ... } // from try @ 0276bbdc with catch @ 0276bbec */
                    /* try { // try from 0276bbf0 to 0286bbf3 has its CatchHandler @ 0276bbfc */
                    /* try { // try from 0276bbf4 to 0286bbff has its CatchHandler @ 0276b760 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0276bbf0 with catch @ 0276bbfc
                        */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
    lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68))();
    if (lVar11 != 0) {
      FUN_03fe3c18(lVar11,0);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70))();
      lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))();
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (lVar11 == 0) goto LAB_0276be18;
      plVar7 = (long *)FUN_0265d924(lVar11,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      goto LAB_0276bc9c;
    }
  }
LAB_0276be18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276bc9c:
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0276bce8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0276bce8:
  uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if ((uVar12 & 1) == 0) goto LAB_0276bd84;
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0276bd44;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_0276bd44:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))();
  thunk_FUN_03fe9acc();
  goto LAB_0276bc9c;
code_r0x0276ba3c:
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  lVar10 = *unaff_x22;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar11) {
        lVar11 = lVar10 + (long)*piVar13 * 0x10 + 0x138;
        goto LAB_0276bad0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  lVar11 = FUN_01ecb238();
LAB_0276bad0:
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(*(long *)(lVar11 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar11 + 8) + 8));
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  param_3 = *(undefined8 **)(lVar11 + 0x30);
  param_2 = *param_3;
  param_1 = unaff_x21;
  if (-1 < *(int *)(*(long *)(lVar11 + 0x28) + 0x28)) {
    param_1 = (undefined8 *)*unaff_x21;
  }
  goto code_r0x0276bb0c;
LAB_0276bd84:
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0276bdd8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_0276bdd8:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


