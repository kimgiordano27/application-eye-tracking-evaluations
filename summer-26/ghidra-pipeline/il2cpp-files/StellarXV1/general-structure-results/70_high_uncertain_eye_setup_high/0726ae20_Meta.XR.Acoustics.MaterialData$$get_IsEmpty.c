/*
FUNCTION_NAME: Meta.XR.Acoustics.MaterialData$$get_IsEmpty
ENTRY_POINT: 0726ae20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_MaterialData__get_IsEmpty(void)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint in_w8;
  undefined4 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 *unaff_x21;
  long *plVar12;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  if (in_w8 == 0) {
LAB_0726af6c:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x1f') {
    if (in_w8 == 1) goto LAB_0726af6c;
    if (*(char *)(unaff_x20 + 0x21) == -99) {
      if (in_w8 < 3) goto LAB_0726af6c;
      cVar2 = *(char *)(unaff_x20 + 0x22);
      *(byte *)(unaff_x19 + 0x70) = (byte)((uint)(int)cVar2 >> 7) & 1;
      uVar1 = *(byte *)(unaff_x20 + 0x22) & 0x1f;
      *(uint *)(unaff_x19 + 0x78) = uVar1;
      if (uVar1 < 0x11) {
        if ((*(byte *)(unaff_x20 + 0x22) & 0x60) != 0) {
          thunk_FUN_040dedf8(PTR_DAT_092c0e50);
          uVar5 = thunk_FUN_040b4efc();
          uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c0ea0);
          FUN_0726a3bc(uVar5,uVar8);
          uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c0e98);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar5,uVar8);
        }
        *(undefined4 *)(unaff_x19 + 0x74) = 9;
        *(undefined4 *)(unaff_x19 + 0x88) = 0xffffffff;
        puVar3 = PTR_DAT_092869a0;
        *(undefined1 *)(unaff_x19 + 0x8c) = 0;
        uVar9 = 0x100;
        if (cVar2 < '\0') {
          uVar9 = 0x101;
        }
        *(int *)(unaff_x19 + 0x7c) = 1 << (ulong)uVar1;
        uVar5 = *(undefined8 *)puVar3;
        *(undefined4 *)(unaff_x19 + 0x94) = uVar9;
        *(undefined8 *)(unaff_x19 + 0x80) = 0x1ff000001ff;
        uVar5 = FUN_04077674(uVar5);
        *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
        thunk_FUN_040ec700();
        lVar6 = FUN_04077674(*unaff_x21,1 << (ulong)(*(uint *)(unaff_x19 + 0x78) & 0x1f));
        plVar11 = (long *)(unaff_x19 + 0x58);
        *plVar11 = lVar6;
        thunk_FUN_040ec700(plVar11,lVar6);
        lVar6 = FUN_04077674(*unaff_x21,1 << (ulong)(*(uint *)(unaff_x19 + 0x78) & 0x1f));
        plVar12 = (long *)(unaff_x19 + 0x68);
        *plVar12 = lVar6;
        thunk_FUN_040ec700(plVar12,lVar6);
        if (*plVar12 != 0) {
          *(int *)(unaff_x19 + 0x90) = (int)*(undefined8 *)(*plVar12 + 0x18);
          lVar6 = 0x11f;
          while (lVar10 = *plVar11, lVar10 != 0) {
            if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar6 - 0x20U) goto LAB_0726af6c;
            *(char *)(lVar10 + lVar6) = (char)(lVar6 - 0x20U);
            lVar6 = lVar6 + -1;
            if (lVar6 == 0x1f) {
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_09287040);
      uVar5 = FUN_04077674(uVar5,5);
      FUN_03b0899c();
      puVar3 = PTR_DAT_092c0e80;
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c0e80);
      FUN_03b089e0(uVar5,uVar8);
      uVar8 = thunk_FUN_040dedf8(puVar3);
      FUN_03b08cc0(uVar5,0,uVar8);
      puVar3 = PTR_DAT_09285980;
      uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x78);
      uVar8 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),(long)&stack0x00000008 + 4
                                );
      FUN_03b089e0(uVar5,uVar8);
      FUN_03b08cc0(uVar5,1,uVar8);
      puVar4 = PTR_DAT_092c0e88;
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c0e88);
      FUN_03b089e0(uVar5,uVar8);
      uVar8 = thunk_FUN_040dedf8(puVar4);
      FUN_03b08cc0(uVar5,2,uVar8);
      uStack0000000000000008 = 0x10;
      uVar8 = thunk_FUN_040b4b34(*(undefined8 *)(puVar3 + 0x48),&stack0x00000008);
      FUN_03b089e0(uVar5,uVar8);
      FUN_03b08cc0(uVar5,3,uVar8);
      puVar3 = PTR_DAT_092c0e90;
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c0e90);
      FUN_03b089e0(uVar5,uVar8);
      uVar8 = thunk_FUN_040dedf8(puVar3);
      FUN_03b08cc0(uVar5,4,uVar8);
      uVar5 = FUN_074e69dc(uVar5,0);
      goto LAB_0726b134;
    }
  }
  uStack000000000000001c = FUN_03ca169c();
  puVar3 = PTR_DAT_09285980;
  uVar5 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),(long)&stack0x00000018 + 4);
  uStack0000000000000018 = FUN_03ca169c();
  uVar8 = thunk_FUN_040b4b34(*(undefined8 *)(puVar3 + 0x18),&stack0x00000018);
  uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c0e70);
  uVar5 = FUN_074e74a4(uVar7,uVar5,uVar8,0);
LAB_0726b134:
  thunk_FUN_040dedf8(PTR_DAT_092c0e50);
  uVar8 = thunk_FUN_040b4efc();
  FUN_0726a3bc(uVar8,uVar5);
  uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c0e98);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar8,uVar5);
}


