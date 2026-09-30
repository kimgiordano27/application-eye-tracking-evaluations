/*
FUNCTION_NAME: _Common.Gameplay.Scripts.TagGame.TagGameManager$$Despawned
ENTRY_POINT: 01d2da88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d2dd44) */
/* WARNING: Removing unreachable block (ram,0x01d2dd24) */

uint _Common_Gameplay_Scripts_TagGame_TagGameManager__Despawned(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x23;
  char cStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_02060754();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x23;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar4 = FUN_025be440();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc09d8,1);
    if (lVar5 == 0) goto LAB_01d2dd3c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01d2dd40;
    *(undefined2 *)(lVar5 + 0x20) = 0x3b;
    if ((unaff_x21 == 0) || (lVar5 = FUN_025c0fd8(), lVar5 == 0)) goto LAB_01d2dd3c;
    if ((2 < *(int *)(lVar5 + 0x18)) &&
       (uVar4 = FUN_02768050(*(undefined8 *)(lVar5 + 0x28),(long)&stack0x00000008 + 4,0),
       (uVar4 & 1) != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_01d2dd40:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x20 == 0) goto LAB_01d2dd3c;
      puVar8 = (undefined8 *)(unaff_x20 + 0x10);
      *puVar8 = *(undefined8 *)(lVar5 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_01d2dd40;
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
      uVar4 = FUN_025be440(*puVar8,0);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN_025be440(uVar9,0), (uVar4 & 1) == 0)) {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01d2dd3c;
        uVar4 = FUN_025bcee0(*(long *)(unaff_x19 + 0x18),uVar9,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01d2dd3c;
                    /* try { // try from 01d2db80 to 01e2dc93 has its CatchHandler @ 01d2db80
                       catch() { ... } // from try @ 01d2db80 with catch @ 01d2db80
                       catch() { ... } // from try @ 01d2dcbc with catch @ 01d2db80
                       catch() { ... } // from try @ 01d2dea4 with catch @ 01d2db80
                       catch() { ... } // from try @ 01d2dedc with catch @ 01d2db80
                       catch() { ... } // from try @ 01d2df48 with catch @ 01d2db80
                       catch() { ... } // from try @ 01d2df54 with catch @ 01d2db80 */
          uVar4 = FUN_025c2edc(*(long *)(unaff_x19 + 0x18),*puVar8,0);
          iVar1 = iStack000000000000000c;
          puVar2 = PTR_DAT_03ccaae0;
          if ((uVar4 & 1) != 0) {
            lVar5 = *(long *)PTR_DAT_03ccaae0;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar2;
            }
            if (iVar1 < *(int *)(*(long *)(lVar5 + 0xb8) + 8)) {
              lVar5 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x38) = iStack000000000000000c;
              uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccab58);
              FUN_0225a3e8();
              if (lVar5 == 0) {
LAB_01d2dd3c:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_02216dac(lVar5,uVar9,&stack0x00000018,*(undefined8 *)PTR_DAT_03ccab40);
              uVar9 = in_stack_00000018;
              uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccab28);
              FUN_02060754();
              lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
              FUN_01d2e274(lVar5,uVar9,uVar6);
              uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
              cStack0000000000000008 = '\0';
              FUN_027e0bd8(uVar9,&stack0x00000008,0);
              lVar10 = *(long *)(unaff_x19 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              lVar7 = *(long *)PTR_DAT_03ccab38;
                    /* try { // try from 01d2dc94 to 01e2dc97 has its CatchHandler @ 01d2dea4 */
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200))
              ;
              if ((uVar4 & 1) == 0) {
                *(undefined4 *)(lVar10 + 0x18) = 0;
              }
              else {
                iVar1 = *(int *)(lVar10 + 0x18);
                *(undefined4 *)(lVar10 + 0x18) = 0;
                    /* try { // try from 01d2dcb8 to 01e2dcbb has its CatchHandler @ 01d2dea8 */
                if (0 < iVar1) {
                    /* try { // try from 01d2dcbc to 01e2de9f has its CatchHandler @ 01d2db80 */
                  FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
                }
              }
              if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_01b5f01c(*(long *)(unaff_x19 + 0x28),lVar5,*(undefined8 *)PTR_DAT_03ccab30);
              if (cStack0000000000000008 != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
              }
              if (lVar5 == 0) goto LAB_01d2dd3c;
              FUN_01d2e324(lVar5);
              uVar3 = 1;
              goto LAB_01d2d9b4;
            }
          }
        }
      }
    }
  }
  uVar3 = FUN_01d2df00();
LAB_01d2d9b4:
  return uVar3 & 1;
}


