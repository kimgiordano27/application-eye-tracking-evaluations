/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.RoomFace>
ENTRY_POINT: 03ef6d64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ef6f90) */
/* WARNING: Removing unreachable block (ram,0x03ef6fa4) */

undefined8 System_Array__IndexOf<OVRPlugin_RoomFace>(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x22;
  long *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long *plVar7;
  long unaff_x29;
  
  do {
    uVar1 = FUN_03642bb8(param_1);
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
      lVar2 = *(long *)(lVar5 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
                    /* try { // try from 03ef6d88 to 03ff6d8b has its CatchHandler @ 03ef6de8 */
        lVar5 = *(long *)(unaff_x19 + 0x38);
      }
                    /* try { // try from 03ef6d9c to 03ff6d9f has its CatchHandler @ 03ef6ddc */
      FUN_036436fc(lVar2,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x30));
                    /* try { // try from 03ef6db0 to 03ff6db3 has its CatchHandler @ 03ef6dd4 */
      FUN_05ca401c();
    }
                    /* try { // try from 03ef6db4 to 03ff6e0b has its CatchHandler @ 03ef697c */
    plVar7 = *(long **)(unaff_x29 + -0x18);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_03ef7090;
    }
    lVar2 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6bec with catch @ 03ef6dc8
                        */
    if (uVar1 != 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6c88 with catch @ 03ef6dcc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6c4c with catch @ 03ef6dd0
                        */
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6db0 with catch @ 03ef6dd4
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6cb4 with catch @ 03ef6dd8
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6d9c with catch @ 03ef6ddc
                        */
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ef6e08;
        }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6c20 with catch @ 03ef6de0
                        */
        uVar1 = uVar1 - 1;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6bd0 with catch @ 03ef6de4
                        */
        piVar6 = piVar6 + 4;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6d88 with catch @ 03ef6de8
                        */
      } while (uVar1 != 0);
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6b5c with catch @ 03ef6dec
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6ba4 with catch @ 03ef6df0
                        */
    puVar3 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,0);
LAB_03ef6e08:
                    /* try { // try from 03ef6e0c to 03ff6e0f has its CatchHandler @ 03ef6e1c */
    uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 03ef6e0c with catch @ 03ef6e1c */
                    /* try { // try from 03ef6e20 to 03ff6e27 has its CatchHandler @ 03ef6e44 */
      uVar4 = FUN_05ca69ec();
                    /* try { // try from 03ef6e28 to 03ff6e47 has its CatchHandler @ 03ef697c */
      plVar7 = *(long **)(unaff_x29 + -0x18);
      if (plVar7 == (long *)0x0) goto LAB_03ef6ebc;
      lVar2 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 == 0) goto LAB_03ef6e94;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_03ef6e7c;
    }
    plVar7 = *(long **)(unaff_x29 + -0x18);
    if (plVar7 == (long *)0x0) break;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar5 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          lVar2 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_03ef6d0c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    lVar2 = FUN_0367cd30(plVar7,lVar2,0);
LAB_03ef6d0c:
    lVar2 = *(long *)(lVar2 + 8);
    *(void **)(unaff_x29 + -0x10) = unaff_x24;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar7,unaff_x29 + -0x10);
    memcpy(unaff_x26,unaff_x24,unaff_x22);
    FUN_05ca3ecc();
    memcpy(unaff_x25,unaff_x26,unaff_x22);
    param_1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
  } while( true );
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_03ef7090;
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar6 = piVar6 + 4;
    if (uVar1 == 0) break;
LAB_03ef6e7c:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03ef6eb0;
    }
  }
LAB_03ef6e94:
  puVar3 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_03ef6eb0:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
LAB_03ef6ebc:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar4;
  }
LAB_03ef7090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


