/*
FUNCTION_NAME: Unity.Netcode.NetworkObject.OnOwnershipRequestedDelegateHandler$$.ctor
ENTRY_POINT: 05d78ab4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


ulong Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler___ctor(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000148;
  int iStack0000000000000154;
  undefined8 in_stack_00000158;
  undefined4 uStack0000000000000164;
  undefined8 in_stack_00000168;
  long in_stack_00000170;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a144d0);
  FUN_02d965b8(PTR_DAT_06a18280);
  FUN_02d965b8(PTR_DAT_069fca08);
  FUN_02d965b8(PTR_DAT_069fcde0);
  *(undefined1 *)(unaff_x21 + 0x298) = 1;
  puVar3 = PTR_DAT_069fb9c0;
  in_stack_00000168 = 0;
  in_stack_00000170 = 0;
  uStack0000000000000164 = 0;
  in_stack_00000158 = 0;
  iStack0000000000000154 = 0;
  in_stack_00000148 = 0;
  if (unaff_x20 == (long *)0x0) goto LAB_05d78fb0;
  lVar14 = *unaff_x20;
  bVar1 = *(byte *)(*(long *)PTR_DAT_069fdca8 + 0x130);
  if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_069fdca8)) {
    FUN_05d780d8();
    uVar12 = FUN_05c64de8();
    return uVar12;
  }
  if (lVar14 == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
    iVar2 = *unaff_x19;
    if (2 < iVar2) {
      if (iVar2 == 3) {
        uVar12 = FUN_054e7658();
        if ((uVar12 & 1) == 0) goto LAB_05d78fb0;
        bVar4 = in_stack_00000170 == *(long *)(unaff_x19 + 4);
        goto LAB_05d790ac;
      }
      if (iVar2 != 4) goto Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke;
      memcpy(&stack0x00000100,unaff_x19,0x48);
      FUN_05d77f50(&stack0x00000178);
      in_stack_000000e8 = in_stack_00000120;
      in_stack_000000e0 = in_stack_00000118;
      in_stack_000000f0 = in_stack_00000128;
      goto LAB_05d78d44;
    }
    if (iVar2 != 1) {
      if (iVar2 != 2) goto Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke;
      uVar12 = FUN_054cfa18();
      if ((uVar12 & 1) == 0) goto LAB_05d78fb0;
      uVar13 = in_stack_00000168;
      uVar8 = *(undefined8 *)(unaff_x19 + 2);
LAB_05d78cf8:
      uVar5 = Unity_Netcode_NetworkLog__Header(uVar13,uVar8,0);
      goto LAB_05d78fb4;
    }
    if ((*(byte *)(unaff_x19 + 1) & 1) == 0) {
      uVar12 = thunk_FUN_0536b75c();
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_0536b75c();
joined_r0x05d79054:
        if ((uVar12 & 1) == 0) {
          uVar12 = thunk_FUN_0536b75c();
          return uVar12;
        }
      }
    }
    else {
      uVar12 = thunk_FUN_0536b75c();
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_0536b75c();
        goto joined_r0x05d79054;
      }
    }
    goto LAB_05d79138;
  }
Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke:
  if (lVar14 == *(long *)(PTR_DAT_069fb9c0 + 0x78)) {
    pfVar6 = (float *)thunk_FUN_02dd328c();
    fVar16 = *pfVar6;
    if (*unaff_x19 == 2) {
      dVar18 = *(double *)(unaff_x19 + 2);
      if (DAT_06dc32b3 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06dc32b3 = '\x01';
      }
      dVar17 = (double)fVar16;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar15 = (double)FUN_054e90d8(ABS(dVar17),ABS(dVar18),0);
      dVar15 = (double)FUN_054e90d8(dVar15 * DAT_010fbee0,8,0);
      uVar5 = (uint)(ABS(dVar18 - dVar17) < dVar15);
      goto LAB_05d78fb4;
    }
    if (*unaff_x19 == 4) {
      uVar13 = FUN_05d780d8();
      uVar12 = FUN_054fb124(uVar13,&stack0x00000164,0);
      if ((uVar12 & 1) != 0) {
        uVar5 = FUN_05d7d920(fVar16,uStack0000000000000164,0);
        goto LAB_05d78fb4;
      }
      goto LAB_05d78fb0;
    }
    lVar14 = *unaff_x20;
  }
  if (lVar14 == *(long *)(puVar3 + 0x80)) {
    puVar7 = (undefined8 *)thunk_FUN_02dd328c();
    uVar13 = *puVar7;
    if (*unaff_x19 == 2) {
      uVar12 = Unity_Netcode_NetworkLog__Header(uVar13,*(undefined8 *)(unaff_x19 + 2),0);
      return uVar12;
    }
    if (*unaff_x19 == 4) {
      uVar8 = FUN_05d780d8();
      uVar12 = FUN_054cfa18(uVar8,&stack0x00000158,0);
      uVar8 = in_stack_00000158;
      if ((uVar12 & 1) != 0) goto LAB_05d78cf8;
      goto LAB_05d78fb0;
    }
    lVar14 = *unaff_x20;
  }
  if (lVar14 == *(long *)(puVar3 + 0x48)) {
    piVar9 = (int *)FUN_02982d2c();
    iVar2 = *piVar9;
    if (*unaff_x19 == 3) {
      bVar4 = *(long *)(unaff_x19 + 4) == (long)iVar2;
    }
    else {
      if (*unaff_x19 != 4) {
        lVar14 = *unaff_x20;
        goto LAB_05d78b78;
      }
      uVar13 = FUN_05d780d8();
      uVar12 = FUN_054e5e7c(uVar13,&stack0x00000154,0);
      if ((uVar12 & 1) == 0) goto LAB_05d78fb0;
      bVar4 = iVar2 == iStack0000000000000154;
    }
  }
  else {
LAB_05d78b78:
    if (lVar14 == *(long *)(puVar3 + 0x68)) {
      plVar10 = (long *)FUN_02982d2c();
      lVar14 = *plVar10;
      if (*unaff_x19 == 3) {
        in_stack_00000148 = *(long *)(unaff_x19 + 4);
      }
      else {
        if (*unaff_x19 != 4) {
          lVar14 = *unaff_x20;
          goto LAB_05d78b84;
        }
        uVar13 = FUN_05d780d8();
        uVar12 = FUN_054e7658(uVar13,&stack0x00000148,0);
        if ((uVar12 & 1) == 0) goto LAB_05d78fb0;
      }
      bVar4 = lVar14 == in_stack_00000148;
    }
    else {
LAB_05d78b84:
      if (lVar14 != *(long *)(puVar3 + 0x28)) {
LAB_05d78b90:
        bVar1 = *(byte *)(*(long *)(puVar3 + 0x98) + 0x130);
        if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar3 + 0x98)))
        {
          if (*unaff_x19 == 4) {
            memcpy(&stack0x00000100,unaff_x19,0x48);
            uVar13 = thunk_FUN_02da6564();
            if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar3 + 0x98));
            }
            FUN_0551b994(uVar13);
            FUN_05d77f50(&stack0x00000178);
LAB_05d78d44:
            uVar5 = FUN_05d77c88();
            goto LAB_05d78fb4;
          }
          if (*unaff_x19 == 3) {
            if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar14 = FUN_0545e1e4();
            bVar4 = lVar14 == *(long *)(unaff_x19 + 4);
            goto LAB_05d790ac;
          }
        }
LAB_05d78fb0:
        uVar5 = 0;
        goto LAB_05d78fb4;
      }
      pbVar11 = (byte *)FUN_02982d2c();
      if (*unaff_x19 != 1) {
        if (*unaff_x19 != 4) {
          lVar14 = *unaff_x20;
          goto LAB_05d78b90;
        }
        if (*pbVar11 == 0) {
          memcpy(&stack0x00000100,unaff_x19,0x48);
          FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_069ff7c8);
          in_stack_00000068 = in_stack_00000120;
          in_stack_00000060 = in_stack_00000118;
          in_stack_00000070 = in_stack_00000128;
          uVar12 = FUN_05d77c88(&stack0x00000060,&stack0x00000178);
          if ((uVar12 & 1) == 0) {
            memcpy(&stack0x00000100,unaff_x19,0x48);
            FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_06a144d0);
            in_stack_00000048 = in_stack_00000120;
            in_stack_00000040 = in_stack_00000118;
            in_stack_00000050 = in_stack_00000128;
            uVar12 = FUN_05d77c88(&stack0x00000040,&stack0x00000178);
            if ((uVar12 & 1) == 0) {
              memcpy(&stack0x00000100,unaff_x19,0x48);
              FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_069fcde0);
              goto LAB_05d78d44;
            }
          }
        }
        else {
          memcpy(&stack0x00000100,unaff_x19,0x48);
          FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_069ff7d0);
          in_stack_000000c8 = in_stack_00000120;
          in_stack_000000c0 = in_stack_00000118;
          in_stack_000000d0 = in_stack_00000128;
          uVar12 = FUN_05d77c88(&stack0x000000c0,&stack0x00000178);
          if ((uVar12 & 1) == 0) {
            memcpy(&stack0x00000100,unaff_x19,0x48);
            FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_069fca08);
            in_stack_000000a8 = in_stack_00000120;
            in_stack_000000a0 = in_stack_00000118;
            in_stack_000000b0 = in_stack_00000128;
            uVar12 = FUN_05d77c88(&stack0x000000a0,&stack0x00000178);
            if ((uVar12 & 1) == 0) {
              memcpy(&stack0x00000100,unaff_x19,0x48);
              FUN_05d77f50(&stack0x00000178,*(undefined8 *)PTR_DAT_06a18280);
              in_stack_00000088 = in_stack_00000120;
              in_stack_00000080 = in_stack_00000118;
              in_stack_00000090 = in_stack_00000128;
              goto LAB_05d78d44;
            }
          }
        }
LAB_05d79138:
        uVar5 = 1;
        goto LAB_05d78fb4;
      }
      bVar4 = *pbVar11 == (*(byte *)(unaff_x19 + 1) & 1);
    }
  }
LAB_05d790ac:
  uVar5 = (uint)bVar4;
LAB_05d78fb4:
  return (ulong)(uVar5 & 1);
}


