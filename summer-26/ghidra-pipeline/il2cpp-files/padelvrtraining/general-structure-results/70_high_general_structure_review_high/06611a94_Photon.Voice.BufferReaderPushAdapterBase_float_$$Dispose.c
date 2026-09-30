/*
FUNCTION_NAME: Photon.Voice.BufferReaderPushAdapterBase<float>$$Dispose
ENTRY_POINT: 06611a94
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21
*/


uint Photon_Voice_BufferReaderPushAdapterBase<float>__Dispose(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  uint uVar10;
  
  FUN_03d2d2b0(PTR_StringLiteral_49906_091adf20);
  FUN_03d2d2b0(PTR_StringLiteral_50290_091ade88);
  FUN_03d2d2b0(PTR_StringLiteral_50292_091adf30);
  FUN_03d2d2b0(PTR_StringLiteral_50294_091ade90);
  FUN_03d2d2b0(PTR_StringLiteral_50729_091ade98);
  FUN_03d2d2b0(PTR_StringLiteral_50790_091adea0);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  FUN_03d2d2b0(PTR_StringLiteral_50951_091adf08);
  FUN_03d2d2b0(PTR_StringLiteral_50953_091adf10);
  FUN_03d2d2b0(PTR_StringLiteral_50955_091adf18);
                    /* try { // try from 06611b0c to 06711b1b has its CatchHandler @ 06611b1c */
  *(undefined1 *)(unaff_x20 + 0x51a) = 1;
  puVar3 = PTR_DAT_091a1be8;
  lVar5 = *(long *)(unaff_x19 + 0x20);
                    /* catch() { ... } // from try @ 066118f8 with catch @ 06611b1c
                       catch() { ... } // from try @ 06611b0c with catch @ 06611b1c */
                    /* try { // try from 06611b20 to 06711b23 has its CatchHandler @ 06611b2c */
                    /* try { // try from 06611b24 to 06711b2f has its CatchHandler @ 066116c0 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  puVar4 = PTR_StringLiteral_49672_091ade58;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06611b20 with catch @ 06611b2c
                        */
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)puVar4,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar10 = 0;
  if ((uVar7 & 1) == 0) {
    uVar10 = 0x10;
  }
  if ((uVar7 & 1) != 0) {
    uVar8 = 1;
    uVar10 = 0x10;
    goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  puVar4 = PTR_StringLiteral_50729_091ade98;
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)puVar4,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar2 = 0;
  if ((uVar7 & 1) == 0) {
    uVar2 = uVar10;
  }
  if ((uVar7 & 1) != 0) {
    uVar8 = 1;
    uVar10 = 0x10;
    goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50951_091adf08,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar1 = 0;
  if ((uVar7 & 1) == 0) {
    uVar1 = uVar2;
  }
  if ((uVar7 & 1) != 0) {
    uVar8 = 2;
    goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50290_091ade88,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar10 = 0;
  if ((uVar7 & 1) == 0) {
    uVar10 = uVar1;
  }
  if ((uVar7 & 1) != 0) {
    uVar8 = 2;
    uVar10 = uVar2;
    goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50953_091adf10,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar2 = 0;
  if ((uVar7 & 1) == 0) {
    uVar2 = uVar10;
  }
  if ((uVar7 & 1) != 0) {
    uVar8 = 4;
    uVar10 = uVar1;
    goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar3);
  }
  uVar9 = FUN_07186ef4(uVar9,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50292_091adf30,0);
  uVar7 = FUN_07190474(uVar9,uVar6,0);
  uVar1 = 0;
  if ((uVar7 & 1) == 0) {
    uVar1 = uVar2;
  }
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)puVar3);
    }
    uVar9 = FUN_07186ef4(uVar9,0);
    uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50955_091adf18,0);
    uVar7 = FUN_07190474(uVar9,uVar6,0);
    uVar10 = 0;
    if ((uVar7 & 1) == 0) {
      uVar10 = uVar1;
    }
    if ((uVar7 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar3);
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50294_091ade90,0);
      uVar7 = FUN_07190474(uVar9,uVar6,0);
      uVar2 = 0;
      if ((uVar7 & 1) == 0) {
        uVar2 = uVar10;
      }
      if ((uVar7 & 1) != 0) {
        uVar8 = 8;
        uVar10 = uVar1;
        goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue;
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar3);
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50790_091adea0,0);
      uVar7 = FUN_07190474(uVar9,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_06611df4;
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar3);
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49906_091adf20,0);
      uVar7 = FUN_07190474(uVar9,uVar6,0);
      if ((uVar7 & 1) == 0) {
        thunk_FUN_03d1e194(PTR_DAT_091a0f10);
        uVar9 = thunk_FUN_03d2ef40();
        uVar6 = thunk_FUN_03d1e194(PTR_DAT_091fb8f8);
        FUN_07173a24(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar9);
      }
    }
    uVar8 = 8;
    uVar10 = uVar2;
  }
  else {
LAB_06611df4:
    uVar8 = 4;
  }
Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue:
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar10 / uVar8;
  }
  return uVar2;
}


