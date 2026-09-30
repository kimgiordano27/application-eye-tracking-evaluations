/*
FUNCTION_NAME: OVRCameraRig$$get_leftEyeCamera
ENTRY_POINT: 036419a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__get_leftEyeCamera(void)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  
                    /* try { // try from 036419a0 to 037419ab has its CatchHandler @ 036419e8 */
                    /* try { // try from 036419ac to 037419df has its CatchHandler @ 0364195c */
  if (*(char *)(unaff_x21 + 0xe19) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x21 + 0xe19) = 1;
  }
  lVar2 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
  ;
  FUN_04067568(in_stack_00000008._4_4_,uStack0000000000000010,uStack0000000000000014,
               *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
               *(undefined4 *)(lVar2 + 0x20),0);
  if (unaff_x20 != 0) {
    FUN_0407d5e8();
    if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84);
      lVar2 = FUN_0404ce70(*(long *)(unaff_x19 + 0x28),0);
      if (lVar2 != 0) {
        FUN_0404fa3c(*(undefined4 *)(&DAT_00c8d938 + (ulong)(iVar1 == 2) * 4),lVar2,
                     *(undefined4 *)(unaff_x19 + 100),0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar2 = FUN_0404ce70(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
          FUN_0404fa3c(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x68),0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar2 = FUN_0404ce70(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
            FUN_0404fa3c(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x6c),0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              lVar2 = FUN_0404ce70(*(long *)(unaff_x19 + 0x28),0);
              if (iVar1 == 2) {
                puVar3 = (undefined4 *)(unaff_x19 + 0x40);
                puVar4 = (undefined4 *)(unaff_x19 + 0x44);
                puVar5 = (undefined4 *)(unaff_x19 + 0x48);
                puVar6 = (undefined4 *)(unaff_x19 + 0x4c);
              }
              else {
                puVar3 = (undefined4 *)(unaff_x19 + 0x30);
                puVar4 = (undefined4 *)(unaff_x19 + 0x34);
                puVar5 = (undefined4 *)(unaff_x19 + 0x38);
                puVar6 = (undefined4 *)(unaff_x19 + 0x3c);
              }
              if (lVar2 != 0) {
                thunk_FUN_0404eefc(*puVar3,*puVar4,*puVar5,*puVar6,lVar2,
                                   *(undefined4 *)(unaff_x19 + 0x70),0);
                if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                   (lVar2 = FUN_0404ce70(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
                  thunk_FUN_0404eefc(*(undefined4 *)(unaff_x19 + 0x50),
                                     *(undefined4 *)(unaff_x19 + 0x54),
                                     *(undefined4 *)(unaff_x19 + 0x58),
                                     *(undefined4 *)(unaff_x19 + 0x5c),lVar2,
                                     *(undefined4 *)(unaff_x19 + 0x74),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


