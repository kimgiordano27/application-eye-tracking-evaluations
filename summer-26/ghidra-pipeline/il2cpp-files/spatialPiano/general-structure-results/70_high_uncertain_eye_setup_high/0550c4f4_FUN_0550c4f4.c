/*
FUNCTION_NAME: FUN_0550c4f4
ENTRY_POINT: 0550c4f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0550c4f4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_06bbf58d & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_120_0_TypeInfo);
    DAT_06bbf58d = 1;
  }
                    /* try { // try from 0550c554 to 0560c563 has its CatchHandler @ 0550c568 */
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = FUN_054e623c(*(long *)(param_1 + 0x48),0);
    puVar1 = OVRPlugin_OVRP_1_120_0_TypeInfo;
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      lVar5 = *(long *)OVRPlugin_OVRP_1_120_0_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar5 = *(long *)puVar1;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar10 = puVar8[3];
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar7 = *puVar8;
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
        FUN_04832d78(lVar10,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar10;
      }
      if (lVar9 != 0) {
                    /* try { // try from 0550c660 to 0560c66f has its CatchHandler @ 0550c674 */
        FUN_03552914(lVar9,lVar10,param_1,param_2,*(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
        return;
      }
    }
    else {
                    /* catch() { ... } // from try @ 0550c484 with catch @ 0550c568
                       catch() { ... } // from try @ 0550c554 with catch @ 0550c568 */
                    /* try { // try from 0550c56c to 0560c56f has its CatchHandler @ 0550c9b0 */
      if ((*(long *)(param_1 + 0x10) != 0) && (param_2 != (long *)0x0)) {
                    /* try { // try from 0550c570 to 0560c58f has its CatchHandler @ 0550aaa8 */
                    /* catch() { ... } // from try @ 0550b250 with catch @ 0550c574 */
        uVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
                    /* try { // try from 0550c590 to 0560c5a7 has its CatchHandler @ 0550c674 */
        switch(uVar2) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x23:
        case 0x24:
        case 0x27:
        case 0x29:
        case 0x2a:
        case 0x2b:
                    /* try { // try from 0550c5a8 to 0560c65f has its CatchHandler @ 0550aaa8 */
          FUN_055027f8(param_1,param_2);
          return;
        case 3:
                    /* try { // try from 0550c8d4 to 0560c98f has its CatchHandler @ 0550aaa8 */
          FUN_055053d0(param_1,param_2);
          return;
        case 4:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x22:
        case 0x2c:
        case 0x31:
        case 0x36:
        case 0x52:
        case 0x53:
        case 0x54:
                    /* catch() { ... } // from try @ 0550c590 with catch @ 0550c674
                       catch() { ... } // from try @ 0550c660 with catch @ 0550c674 */
                    /* try { // try from 0550c678 to 0560c67b has its CatchHandler @ 0550c9b0 */
                    /* try { // try from 0550c67c to 0560c69b has its CatchHandler @ 0550aaa8 */
                    /* catch() { ... } // from try @ 0550b0cc with catch @ 0550c680 */
          FUN_05504e24(param_1,param_2);
          return;
        case 6:
          FUN_05508b70(param_1,param_2);
          return;
        case 7:
                    /* try { // try from 0550c990 to 0560c99f has its CatchHandler @ 0550c9a0 */
          FUN_0550aa78(param_1,param_2);
          return;
        case 8:
                    /* catch() { ... } // from try @ 0550b5f8 with catch @ 0550c78c */
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                    /* try { // try from 0550c7ac to 0560c7c3 has its CatchHandler @ 0550c894 */
          lVar5 = *(long *)(PTR_DAT_067c9338 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
                    /* try { // try from 0550c7c4 to 0560c87f has its CatchHandler @ 0550aaa8 */
          uVar6 = FUN_050e4454(lVar5 + 0x20,0);
          uVar3 = FUN_050ed374(uVar7,uVar6,0);
          FUN_05505f68(param_1,param_2,uVar3 & 1);
          return;
        case 9:
                    /* try { // try from 0550c880 to 0560c88f has its CatchHandler @ 0550c894 */
          FUN_05500f40(param_1,param_2);
          return;
        case 10:
        case 0xb:
                    /* try { // try from 0550c69c to 0560c6b3 has its CatchHandler @ 0550c780 */
          FUN_0550390c(param_1,param_2);
          return;
        case 0x11:
          FUN_0550b024(param_1,param_2);
          return;
        case 0x12:
          FUN_0550a878(param_1,param_2);
          return;
        case 0x16:
          FUN_0550b28c(param_1,param_2);
          return;
        case 0x17:
          FUN_05509c88(param_1,param_2);
          return;
        case 0x18:
                    /* try { // try from 0550c76c to 0560c77b has its CatchHandler @ 0550c780 */
          FUN_0550b698(param_1,param_2);
          return;
        case 0x1f:
                    /* catch() { ... } // from try @ 0550c7ac with catch @ 0550c894
                       catch() { ... } // from try @ 0550c880 with catch @ 0550c894 */
                    /* try { // try from 0550c898 to 0560c89b has its CatchHandler @ 0550c9b0 */
                    /* try { // try from 0550c89c to 0560c8bb has its CatchHandler @ 0550aaa8 */
                    /* catch() { ... } // from try @ 0550b550 with catch @ 0550c8a0 */
          FUN_055098e4(param_1,param_2);
          return;
        case 0x20:
        case 0x21:
                    /* try { // try from 0550c6b4 to 0560c76b has its CatchHandler @ 0550aaa8 */
          FUN_0550a0b0(param_1,param_2);
          return;
        case 0x25:
          FUN_055055ac(param_1,param_2);
          return;
        case 0x26:
          FUN_05501558(param_1,param_2);
          return;
        case 0x28:
          FUN_0550bd64(param_1,param_2);
          return;
        case 0x2d:
                    /* catch() { ... } // from try @ 0550c69c with catch @ 0550c780
                       catch() { ... } // from try @ 0550c76c with catch @ 0550c780 */
                    /* try { // try from 0550c784 to 0560c787 has its CatchHandler @ 0550c9b0 */
                    /* try { // try from 0550c788 to 0560c7ab has its CatchHandler @ 0550aaa8 */
          FUN_0550c2e0(param_1,param_2);
          return;
        case 0x2e:
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          lVar5 = *(long *)(PTR_DAT_067c9338 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar6 = FUN_050e4454(lVar5 + 0x20,0);
          uVar3 = FUN_050ed374(uVar7,uVar6,0);
          FUN_055026ac(param_1,param_2,uVar3 & 1);
          return;
        case 0x2f:
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          lVar5 = *(long *)(PTR_DAT_067c9338 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          break;
        case 0x30:
          FUN_0550a408(param_1,param_2);
          return;
        default:
          uVar7 = FUN_054cb858(param_2,0);
          FUN_05500c08(param_1,uVar7);
          return;
        case 0x33:
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          FUN_05501018(param_1,uVar7);
          return;
        case 0x35:
                    /* catch() { ... } // from try @ 0550c8bc with catch @ 0550c9a0
                       catch() { ... } // from try @ 0550c990 with catch @ 0550c9a0 */
                    /* try { // try from 0550c9a4 to 0560c9a7 has its CatchHandler @ 0550c9b0 */
                    /* try { // try from 0550c9a8 to 0560c9b3 has its CatchHandler @ 0550aaa8 */
                    /* catch() { ... } // from try @ 0550be08 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550bf14 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c020 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c12c with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c240 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c350 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c460 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c56c with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c678 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c784 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c898 with catch @ 0550c9b0
                       catch() { ... } // from try @ 0550c9a4 with catch @ 0550c9b0 */
          FUN_05507548(param_1,param_2);
          return;
        case 0x37:
          FUN_05501d50(param_1,param_2);
          return;
        case 0x38:
          FUN_055073c8(param_1,param_2);
          return;
        case 0x39:
          FUN_0550a5a0(param_1,param_2);
          return;
        case 0x3a:
          FUN_0550619c(param_1,param_2);
          return;
        case 0x3b:
          FUN_05506448(param_1,param_2);
          return;
        case 0x3c:
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          lVar5 = *(long *)(PTR_DAT_067c9338 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar6 = FUN_050e4454(lVar5 + 0x20,0);
          uVar3 = FUN_050ed374(uVar7,uVar6,0);
          FUN_05507dbc(param_1,param_2,uVar3 & 1);
          return;
        case 0x3d:
          FUN_05507ec4(param_1,param_2);
          return;
        case 0x3e:
          FUN_0550c00c(param_1,param_2);
          return;
        case 0x51:
                    /* try { // try from 0550c8bc to 0560c8d3 has its CatchHandler @ 0550c9a0 */
          FUN_0550c130(param_1,param_2);
          return;
        }
        uVar6 = FUN_050e4454(lVar5 + 0x20,0);
        uVar3 = FUN_050ed374(uVar7,uVar6,0);
        FUN_055015dc(param_1,param_2,uVar3 & 1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


