/*
FUNCTION_NAME: OVRBoundary$$.cctor
ENTRY_POINT: 051485c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_10;functionality_possible_biometrics_hits_6
*/


uint OVRBoundary___cctor(float param_1,float param_2,float param_3,long param_4,long param_5,
                        long param_6,long param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  uint uStack000000000000002c;
  
  if ((DAT_06a70e83 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9650);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e0ea0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606d68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606c18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9658);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606d70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9660);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606c20);
    DAT_06a70e83 = 1;
  }
  if (param_6 != 0) {
    *(undefined4 *)(param_6 + 0x18) = 0;
    *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
  }
  puVar3 = PTR_DAT_06606d70;
  puVar2 = PTR_DAT_06606c20;
  uStack000000000000002c = 0;
  iVar10 = 0;
  do {
    if (param_7 == 0) {
      lVar8 = *(long *)(param_4 + 0x28);
      if (lVar8 == 0) {
OVRCameraRig__get_leftEyeAnchor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar5 = iVar10;
      if (*(int *)(lVar8 + 0x18) <= iVar10) {
LAB_05148800:
        return uStack000000000000002c & 1;
      }
    }
    else {
      if (*(int *)(param_7 + 0x18) <= iVar10) goto LAB_05148800;
      iVar5 = FUN_0391debc(param_7,iVar10,*(undefined8 *)PTR_DAT_065c9660);
      lVar8 = *(long *)(param_4 + 0x28);
      if (lVar8 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    }
    FUN_0390aff4(&stack0x00000008,lVar8,iVar5,*(undefined8 *)puVar2);
    uVar4 = uStack0000000000000014;
    if (param_5 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    fVar12 = fStack0000000000000010 - param_3;
    fVar13 = fStack000000000000000c - param_2;
    fVar14 = fStack0000000000000008 - param_1;
    uVar6 = FUN_050e63d0(fVar14,fVar13,fVar12,uStack0000000000000014,*(undefined8 *)(param_5 + 0x10)
                         ,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = *(long *)(param_5 + 0x18);
      if (lVar8 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar8 + 0x18)) {
        uVar7 = FUN_03968108(lVar8,iVar11,*(undefined8 *)puVar3);
        uVar6 = FUN_050e63d0(fVar14,fVar13,fVar12,uVar4,uVar7,0);
        if ((uVar6 & 1) != 0) {
          if (param_6 == 0) {
            uStack000000000000002c = 1;
            goto LAB_05148800;
          }
          lVar8 = *(long *)(param_6 + 0x10);
          lVar9 = *(long *)PTR_DAT_065c9650;
          *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
          if (lVar8 == 0) goto OVRCameraRig__get_leftEyeAnchor;
          uVar1 = *(uint *)(param_6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(param_6 + 0x18) = uVar1 + 1;
            *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = iVar5;
          }
          else {
            FUN_0391e1ac(param_6,iVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uStack000000000000002c = 1;
          break;
        }
        lVar8 = *(long *)(param_5 + 0x18);
        iVar11 = iVar11 + 1;
        if (lVar8 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


