/*
FUNCTION_NAME: Meta.WitAi.Requests.AudioStreamHandler$$Dispose
ENTRY_POINT: 06d03894
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_AudioStreamHandler__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e8b800);
  FUN_03c8f898(PTR_DAT_08e7a218);
  FUN_03c8f898(PTR_DAT_08e7a228);
  FUN_03c8f898(PTR_DAT_08e7a230);
  FUN_03c8f898(PTR_DAT_08e7a258);
  FUN_03c8f898(PTR_DAT_08e6af48);
  FUN_03c8f898(PTR_DAT_08e8b820);
  *(undefined1 *)(unaff_x21 + 0x681) = 1;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    if (unaff_x19 == 0) goto LAB_06d03ecc;
    uVar10 = 0;
    if (*(int *)(unaff_x20 + 0x18) != 2) {
      uVar10 = 0x3f800000;
    }
    FUN_085b78e0(uVar10);
  }
  if (*(int *)(unaff_x20 + 0x1c) == 0) {
    if (unaff_x19 == 0) goto LAB_06d03ecc;
  }
  else {
    if (unaff_x19 == 0) goto LAB_06d03ecc;
    uVar10 = 0;
    if (*(int *)(unaff_x20 + 0x1c) != 2) {
      uVar10 = 0x3f800000;
    }
    FUN_085b78e0(uVar10);
  }
  puVar1 = PTR_DAT_08e68f00;
  uVar3 = FUN_085b5fc8();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  uVar4 = FUN_085decd4(uVar3,0,0);
  puVar2 = PTR_DAT_08e80528;
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(unaff_x20 + 0x10);
    uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e80528);
    if ((lVar8 == 0) ||
       (plVar5 = (long *)Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame__ReadByte
                                   (lVar8,*(undefined8 *)PTR_DAT_08e6eab0,uVar3,0),
       plVar5 == (long *)0x0)) goto LAB_06d03ecc;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_06d03ed0;
    puVar6 = (undefined4 *)thunk_FUN_03cf5388();
    FUN_085b5e58(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  }
  else {
    FUN_085b5e58(*(undefined4 *)(unaff_x20 + 0x74),*(undefined4 *)(unaff_x20 + 0x78),
                 *(undefined4 *)(unaff_x20 + 0x7c),*(undefined4 *)(unaff_x20 + 0x80));
    fVar9 = (float)FUN_085b7e18();
    if (((fVar9 == 1.0) && (fVar9 = (float)FUN_085b7e18(), fVar9 == 1.0)) &&
       (uVar4 = FUN_085b662c(), (uVar4 & 1) != 0)) {
      FUN_085b78e0(0x3f000000);
    }
  }
  iVar7 = *(int *)(unaff_x20 + 0x18);
  if (iVar7 == 2) {
    uVar4 = FUN_085b662c();
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_085b5fc8();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar1);
      }
      uVar4 = FUN_085decd4(uVar3,0,0);
      puVar2 = PTR_DAT_08e80528;
      if ((uVar4 & 1) == 0) {
        lVar8 = *(long *)(unaff_x20 + 0x10);
        uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e80528);
        if ((lVar8 == 0) ||
           (plVar5 = (long *)Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame__ReadByte
                                       (lVar8,*(undefined8 *)PTR_DAT_08e7a1a8,uVar3,0),
           plVar5 == (long *)0x0)) goto LAB_06d03ecc;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_06d03ed0;
        puVar6 = (undefined4 *)thunk_FUN_03cf5388();
        FUN_085b5e58(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
        uVar10 = *(undefined4 *)(unaff_x20 + 0x38);
      }
      else {
        FUN_085b5e58(*(undefined4 *)(unaff_x20 + 0x88),*(undefined4 *)(unaff_x20 + 0x8c),
                     *(undefined4 *)(unaff_x20 + 0x90),*(undefined4 *)(unaff_x20 + 0x94));
        uVar10 = *(undefined4 *)(unaff_x20 + 0x9c);
      }
      FUN_085b78e0(uVar10);
    }
    iVar7 = *(int *)(unaff_x20 + 0x18);
  }
  if ((iVar7 == 1) && (uVar4 = FUN_085b662c(), (uVar4 & 1) != 0)) {
    uVar3 = FUN_085b5fc8();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar1);
    }
    uVar4 = FUN_085decd4(uVar3,0,0);
    puVar2 = PTR_DAT_08e69880;
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69880);
      if ((lVar8 == 0) ||
         (plVar5 = (long *)Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame__ReadByte
                                     (lVar8,*(undefined8 *)PTR_DAT_08e8b800,uVar3,0),
         plVar5 == (long *)0x0)) goto LAB_06d03ecc;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_06d03ed0;
      puVar6 = (undefined4 *)thunk_FUN_03cf5388();
      FUN_085b78e0(*puVar6);
      uVar10 = *(undefined4 *)(unaff_x20 + 0x38);
    }
    else {
      FUN_085b78e0(*(undefined4 *)(unaff_x20 + 0x84));
      uVar10 = *(undefined4 *)(unaff_x20 + 0x98);
    }
    FUN_085b78e0(uVar10);
  }
  uVar4 = FUN_085b662c();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_085b662c(), (uVar4 & 1) != 0)) {
    uVar3 = FUN_085b5fc8();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar1);
    }
    FUN_085decd4(uVar3,0,0);
    FUN_085b78e0(*(undefined4 *)(unaff_x20 + 0xa0));
  }
  uVar4 = FUN_085b662c();
  puVar2 = PTR_DAT_08e6af48;
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_085b662c(), (uVar4 & 1) != 0)) {
    uVar3 = FUN_085b5fc8();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar1);
    }
    uVar4 = FUN_085decd4(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      FUN_085b6760();
      puVar1 = PTR_DAT_08e80528;
      lVar8 = *(long *)(unaff_x20 + 0x10);
      uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e80528);
      if ((lVar8 == 0) ||
         (plVar5 = (long *)Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame__ReadByte
                                     (lVar8,*(undefined8 *)puVar2,uVar3,0), plVar5 == (long *)0x0))
      {
LAB_06d03ecc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
LAB_06d03ed0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      puVar6 = (undefined4 *)thunk_FUN_03cf5388();
      uVar10 = *puVar6;
      uVar11 = puVar6[1];
      uVar12 = puVar6[2];
      uVar13 = puVar6[3];
    }
    else {
      FUN_085b671c();
      uVar10 = 0x3f800000;
      uVar11 = 0x3f800000;
      uVar12 = 0x3f800000;
      uVar13 = 0x3f800000;
    }
    FUN_085b5e58(uVar10,uVar11,uVar12,uVar13);
  }
  return;
}


