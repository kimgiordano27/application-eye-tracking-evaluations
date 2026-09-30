/*
FUNCTION_NAME: WebSocketSharp.PayloadData.<GetEnumerator>d__30$$System.IDisposable.Dispose
ENTRY_POINT: 0a419954
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void WebSocketSharp_PayloadData_<GetEnumerator>d__30__System_IDisposable_Dispose(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack000000000000013c;
  
  puVar3 = PTR_DAT_0ac40140;
  if ((DAT_0b34342f & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac40140);
    FUN_04947ee4(PTR_DAT_0ac56118);
    FUN_04947ee4(PTR_DAT_0ace5f00);
    FUN_04947ee4(PTR_DAT_0acf01d8);
    FUN_04947ee4(PTR_DAT_0ac09fa8);
    FUN_04947ee4(PTR_DAT_0ac1ef58);
    FUN_04947ee4(PTR_DAT_0ac09ea0);
    FUN_04947ee4(PTR_DAT_0acf15c8);
    FUN_04947ee4(PTR_DAT_0acede90);
    FUN_04947ee4(PTR_DAT_0ac42568);
    FUN_04947ee4(PTR_DAT_0ac1f858);
    FUN_04947ee4(PTR_DAT_0acf15d0);
    FUN_04947ee4(PTR_DAT_0acf15d8);
    FUN_04947ee4(PTR_DAT_0acf15e0);
    FUN_04947ee4(PTR_DAT_0acf15e8);
    DAT_0b34342f = 1;
  }
  puVar6 = PTR_DAT_0acf15e8;
  puVar5 = PTR_DAT_0acf15d8;
  puVar4 = PTR_DAT_0acf15d0;
  puVar10 = PTR_DAT_0acf01d8;
  puVar8 = PTR_DAT_0ace5f00;
  iStack000000000000013c = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar12 = PTR_DAT_0acf15e0;
  puVar11 = PTR_DAT_0acf15c8;
  puVar9 = PTR_DAT_0acede90;
  puVar7 = PTR_DAT_0ac56118;
  puVar3 = PTR_DAT_0ac42568;
  FUN_0a325980(&stack0x000000a0,*(undefined8 *)puVar5,0);
  memcpy(*(void **)(*(long *)puVar10 + 0xb8),&stack0x000000a0,0x98);
  thunk_FUN_049ee3d8(*(long *)(*(long *)puVar10 + 0xb8) + 8,0);
  FUN_0a325980(&stack0x00000008,*(undefined8 *)puVar4,0);
  lVar17 = *(long *)puVar10;
  memcpy((void *)(*(long *)(lVar17 + 0xb8) + 0x98),&stack0x00000008,0x98);
  thunk_FUN_049ee3d8(*(long *)(lVar17 + 0xb8) + 0xa0,0);
  lVar17 = *(long *)(*(long *)puVar10 + 0xb8);
  *(undefined8 *)(lVar17 + 0x130) = *(undefined8 *)puVar6;
  thunk_FUN_049ee3d8(lVar17 + 0x130);
  lVar17 = *(long *)puVar8;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar17 = *(long *)puVar8;
  }
  uVar13 = FUN_08bda228(*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x1c8),*(undefined8 *)puVar3,
                        *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x130),
                        *(undefined8 *)puVar9,0);
  lVar17 = *(long *)(*(long *)puVar10 + 0xb8);
  *(undefined8 *)(lVar17 + 0x138) = uVar13;
  thunk_FUN_049ee3d8(lVar17 + 0x138,uVar13);
  uVar13 = FUN_0a12a1fc(*(undefined8 *)puVar12,1,0,0,0);
  uVar14 = *(undefined8 *)puVar11;
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x148) = uVar13;
  uVar13 = FUN_0a12a1fc(uVar14,1,0,0,0);
  uVar14 = *(undefined8 *)puVar7;
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x150) = uVar13;
  lVar17 = thunk_FUN_04983f60(uVar14);
  FUN_0a1c58bc(lVar17,0);
  if (lVar17 != 0) {
    FUN_0a1c4fec(lVar17,8,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(long *)(lVar15 + 0x158) = lVar17;
    thunk_FUN_049ee3d8(lVar15 + 0x158,lVar17);
    lVar17 = thunk_FUN_04983f60(*(undefined8 *)puVar7);
    FUN_0a1c58bc(lVar17,0);
    if (lVar17 != 0) {
      FUN_0a1c4fec(lVar17,8,0);
      lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
      *(long *)(lVar15 + 0x160) = lVar17;
      thunk_FUN_049ee3d8(lVar15 + 0x160,lVar17);
      lVar17 = thunk_FUN_04983f60(*(undefined8 *)puVar7);
      FUN_0a1c58bc(lVar17,0);
      puVar6 = PTR_DAT_0ac1f858;
      puVar5 = PTR_DAT_0ac1ef58;
      puVar4 = PTR_DAT_0ac09fa8;
      puVar3 = PTR_DAT_0ac09ea0;
      if (lVar17 != 0) {
        FUN_0a1c4fec(lVar17,8,0);
        lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
        *(long *)(lVar15 + 0x168) = lVar17;
        thunk_FUN_049ee3d8(lVar15 + 0x168,lVar17);
        iVar1 = *(int *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x208);
        uVar13 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_06b7f684(uVar13,iVar1 + 1,*(undefined8 *)puVar5);
        lVar17 = *(long *)(*(long *)puVar10 + 0xb8);
        *(undefined8 *)(lVar17 + 0x140) = uVar13;
        thunk_FUN_049ee3d8(lVar17 + 0x140,uVar13);
        iStack000000000000013c = 0;
        while( true ) {
          iVar1 = iStack000000000000013c;
          lVar17 = *(long *)puVar8;
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar17 = *(long *)puVar8;
          }
          uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x138);
          lVar15 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x140);
          if (*(int *)(*(long *)(lVar17 + 0xb8) + 0x208) < iVar1) break;
          uVar14 = FUN_08d770a4(&stack0x0000013c,0);
          uVar13 = FUN_08bcc3c0(uVar13,uVar14,0);
          if (lVar15 == 0) goto LAB_0a419e18;
          lVar17 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_0a419e18;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
            thunk_FUN_049ee3d8();
          }
          else {
            FUN_06b7fe74(lVar15,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          iStack000000000000013c = iStack000000000000013c + 1;
        }
        uVar13 = FUN_08bcc3c0(uVar13,*(undefined8 *)puVar6,0);
        if (lVar15 != 0) {
          lVar17 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar17 != 0) {
            uVar2 = *(uint *)(lVar15 + 0x18);
            if (uVar2 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              thunk_FUN_049ee3d8();
            }
            else {
              FUN_06b7fe74(lVar15,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            return;
          }
        }
      }
    }
  }
LAB_0a419e18:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


