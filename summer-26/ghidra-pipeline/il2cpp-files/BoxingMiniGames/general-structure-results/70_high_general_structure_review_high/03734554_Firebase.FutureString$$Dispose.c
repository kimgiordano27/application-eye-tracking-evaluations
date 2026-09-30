/*
FUNCTION_NAME: Firebase.FutureString$$Dispose
ENTRY_POINT: 03734554
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Firebase_FutureString__Dispose(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  byte *pbVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  byte *unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  undefined8 uVar12;
  
  uVar8 = FUN_037352c4(unaff_x29 + -0x40);
  if (uVar8 < 0x60) {
    lVar9 = unaff_x20 + uVar8 * 0x10;
    pcVar10 = (char *)(lVar9 + 0x1c);
    if (*pcVar10 == '\0') {
      lVar2 = unaff_x20 + uVar8 * 0x10;
      lVar3 = unaff_x19 + 0x28 + uVar8 * 0x10;
      uVar12 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
      *pcVar10 = '\x01';
      *(undefined8 *)(lVar3 + 0x20) = uVar12;
      *(undefined8 *)(lVar3 + 0x18) = uVar7;
    }
    *(undefined4 *)(lVar9 + 0x18) = 1;
    pbVar11 = *(byte **)(unaff_x29 + -0x40);
    if (pbVar11 < unaff_x24) goto LAB_03734940;
LAB_03734030:
    unaff_x27 = unaff_x27 + 0x18;
    if (unaff_x27 != 0x30) {
      puVar1 = (ulong *)(unaff_x29 + -0x38 + unaff_x27);
      pbVar11 = (byte *)*puVar1;
      unaff_x24 = (byte *)puVar1[1];
      unaff_x21 = puVar1[2];
      *(byte **)(unaff_x29 + -0x40) = pbVar11;
      if (pbVar11 < unaff_x24 && unaff_x21 != 0) {
        unaff_x25 = 0;
        do {
          bVar5 = *pbVar11;
          *(byte **)(unaff_x29 + -0x40) = pbVar11 + 1;
          if (bVar5 < 0x30) {
                    /* WARNING: Could not recover jumptable at 0x03734080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)((ulong)*(ushort *)(unaff_x23 + (ulong)bVar5 * 2) * 4 + 0x3734084))();
            return uVar7;
          }
          bVar4 = bVar5 & 0xc0;
          uVar8 = (ulong)bVar5 & 0x3f;
          if (bVar4 == 0x40) {
            unaff_x25 = unaff_x25 + (uint)(*(int *)(unaff_x22 + 0x28) * (int)uVar8);
            pbVar11 = *(byte **)(unaff_x29 + -0x40);
          }
          else if (bVar4 == 0xc0) {
            if (*(char *)(unaff_x20 + uVar8 * 0x10 + 0x1c) != '\0') {
              lVar9 = unaff_x19 + 0x28 + uVar8 * 0x10;
              lVar2 = unaff_x20 + uVar8 * 0x10;
              uVar7 = *(undefined8 *)(lVar9 + 0x18);
              *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
              *(undefined8 *)(lVar2 + 0x18) = uVar7;
            }
            pbVar11 = *(byte **)(unaff_x29 + -0x40);
          }
          else {
            if (bVar4 != 0x80) goto LAB_03734afc;
            *(undefined4 *)(unaff_x19 + 4) = unaff_w28;
            lVar9 = FUN_037352c4(unaff_x29 + -0x40,unaff_x24);
            iVar6 = *(int *)(unaff_x22 + 0x2c);
            pcVar10 = (char *)(unaff_x20 + uVar8 * 0x10 + 0x1c);
            if (*pcVar10 == '\0') {
              lVar2 = unaff_x20 + uVar8 * 0x10;
              uVar7 = *(undefined8 *)(lVar2 + 0x18);
              lVar3 = unaff_x19 + 0x28 + uVar8 * 0x10;
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
              *(undefined8 *)(lVar3 + 0x18) = uVar7;
              *pcVar10 = '\x01';
            }
            lVar2 = unaff_x20 + uVar8 * 0x10;
            unaff_w28 = *(undefined4 *)(unaff_x19 + 4);
            *(undefined4 *)(lVar2 + 0x18) = 2;
            *(long *)(lVar2 + 0x20) = lVar9 * iVar6;
            pbVar11 = *(byte **)(unaff_x29 + -0x40);
          }
          if (unaff_x24 <= pbVar11) break;
LAB_03734940:
        } while (unaff_x25 < unaff_x21);
      }
      goto LAB_03734030;
    }
    uVar7 = 1;
  }
  else {
    fwrite("libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n",0x40,1,
           (FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130));
    fflush((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130));
LAB_03734afc:
    uVar7 = 0;
  }
  return uVar7;
}


