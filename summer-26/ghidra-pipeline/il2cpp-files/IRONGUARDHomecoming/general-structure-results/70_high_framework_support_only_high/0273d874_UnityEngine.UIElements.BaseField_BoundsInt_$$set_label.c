/*
FUNCTION_NAME: UnityEngine.UIElements.BaseField<BoundsInt>$$set_label
ENTRY_POINT: 0273d874
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0273dcac) */
/* WARNING: Removing unreachable block (ram,0x0273dc98) */
/* WARNING: Removing unreachable block (ram,0x0273dcb4) */

void UnityEngine_UIElements_BaseField<BoundsInt>__set_label(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  long *plVar9;
  undefined8 *unaff_x22;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
                    /* try { // try from 0273d884 to 0283d8c7 has its CatchHandler @ 0273d920 */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0))();
  lVar6 = **(long **)(unaff_x29 + -0x30);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
  uVar2 = *puVar4;
  *(void **)(unaff_x29 + -0x28) = unaff_x25;
  (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x28);
  memcpy(unaff_x26,unaff_x25,unaff_x20);
  while (uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xe0))
                           (), (uVar3 & 1) != 0) {
                    /* try { // try from 0273d8f0 to 0283d8f3 has its CatchHandler @ 0273d918 */
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 200);
                    /* try { // try from 0273d8f4 to 0283d907 has its CatchHandler @ 0273d924 */
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
                    /* try { // try from 0273d908 to 0283d93b has its CatchHandler @ 0273d4e4 */
    (*(code *)puVar4[2])(uVar2);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273d8f0 with catch @ 0273d918
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273d7f8 with catch @ 0273d91c
                        */
    memcpy(unaff_x28,unaff_x22,unaff_x24);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273d884 with catch @ 0273d920
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273d8f4 with catch @ 0273d924
                        */
    memcpy(unaff_x27,unaff_x28,unaff_x24);
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                    /* try { // try from 0273d93c to 0283d953 has its CatchHandler @ 0273d988 */
    puVar4 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x78) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x27;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0xd8);
    uVar2 = *puVar5;
                    /* try { // try from 0273d954 to 0283d977 has its CatchHandler @ 0273d4e4 */
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    (*(code *)puVar5[2])(uVar2);
  }
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                    /* try { // try from 0273d978 to 0283d987 has its CatchHandler @ 0273d988 */
  lVar6 = *(long *)(lVar7 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
                    /* catch() { ... } // from try @ 0273d93c with catch @ 0273d988
                       catch() { ... } // from try @ 0273d978 with catch @ 0273d988 */
                    /* try { // try from 0273d98c to 0283d98f has its CatchHandler @ 0273d998 */
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
                    /* try { // try from 0273d990 to 0283d99b has its CatchHandler @ 0273d4e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0273d98c with catch @ 0273d998
                        */
  FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0xe8),*(undefined8 *)(unaff_x29 + -0x48));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xf0))();
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      lVar6 = *(long *)(lVar7 + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      }
      puVar4 = *(undefined8 **)(lVar7 + 0xf8);
      lVar6 = **(long **)(lVar6 + 0xb8);
      uVar2 = *puVar4;
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar4[2])(uVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      puVar4 = unaff_x22;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x78) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x22;
      }
      puVar5 = *(undefined8 **)(lVar7 + 0x100);
      uVar2 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar6,unaff_x29 + -0x20);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  plVar9 = *(long **)(unaff_x29 + -0x38);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0273dbdc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0273dbdc:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_0273dc48;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0273dc48:
  (*(code *)*puVar4)();
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


