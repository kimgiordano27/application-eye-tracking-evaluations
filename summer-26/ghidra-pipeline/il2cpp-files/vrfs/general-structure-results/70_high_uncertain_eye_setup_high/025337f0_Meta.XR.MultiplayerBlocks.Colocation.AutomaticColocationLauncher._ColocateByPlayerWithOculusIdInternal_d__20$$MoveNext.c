/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<ColocateByPlayerWithOculusIdInternal>d__20$$MoveNext
ENTRY_POINT: 025337f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20__MoveNext
          (ulong param_1)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  ulong unaff_x19;
  byte unaff_w20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  byte unaff_w29;
  float fVar10;
  undefined4 uVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  byte bStack0000000000000008;
  byte bStack000000000000000c;
  
  do {
    uVar7 = param_1;
    do {
      do {
        *(undefined1 *)((long)unaff_x25 + 0x2c) = 0;
        if (*(char *)(unaff_x22 + 0x2d) != '\0') {
          uVar7 = (ulong)(uint)(*(float *)(unaff_x25 + 0x21) - (float)uVar7);
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar7 = FUN_04667970(uVar7,unaff_x25,0,unaff_w21,0);
        puVar5 = PTR_DAT_06db8448;
        if ((uVar7 & 1) == 0) {
          if (((unaff_x19 & 1) != 0) && ((int)unaff_x25[2] == 1)) {
            iVar1 = *(int *)(unaff_x22 + 0x10c);
            if (*(float *)(unaff_x22 + 0x104) <= 0.0) {
              if (iVar1 != 0) goto LAB_02533958;
              *(undefined4 *)((long)unaff_x25 + 0x104) = 0;
            }
            else {
              if (iVar1 == 0) {
                cVar9 = *(char *)(unaff_x22 + 0x2c);
LAB_0253397c:
                bVar6 = true;
              }
              else {
LAB_02533958:
                if (*(char *)(unaff_x22 + 0x2c) == '\0') {
                  if (iVar1 < *(int *)(unaff_x22 + 0xa4)) {
                    cVar9 = '\0';
                    goto LAB_0253397c;
                  }
                  bVar6 = *(int *)(unaff_x22 + 0xa4) == -1;
                  cVar9 = '\0';
                }
                else {
                  bVar6 = false;
                  cVar9 = '\x01';
                }
              }
              bVar4 = bVar6;
              if (*(char *)((long)unaff_x25 + 0x2c) != '\0') {
                bVar4 = !bVar6;
              }
              bVar2 = bVar4 ^ unaff_w20;
              if ((cVar9 != '\0') && ((unaff_w20 & 1) == 0)) {
                bVar2 = bVar2 ^ bStack0000000000000008;
              }
              uVar11 = 0;
              if ((bVar2 & 1) == 0) {
                uVar11 = (undefined4)unaff_x25[0x14];
              }
              *(undefined4 *)((long)unaff_x25 + 0x104) = uVar11;
            }
          }
        }
        else {
          unaff_x23 = unaff_x23 & 0xffffffff;
          unaff_x19 = unaff_x19 & 0xffffffff;
          lVar8 = *(long *)PTR_DAT_06db8448;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar8 = *(long *)puVar5;
          }
          unaff_x26 = (undefined8 *)PTR_DAT_06e58f50;
          if (*(int *)(*(long *)(lVar8 + 0xb8) + 0x10) == 1) {
            return 1;
          }
          if (*(long *)(unaff_x22 + 0x120) == 0) {
LAB_02533a18:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(int *)(*(long *)(unaff_x22 + 0x120) + 0x18) == 1) {
            if (*(long *)(unaff_x22 + 0x128) == 0) goto LAB_02533a18;
            if ((*(int *)(*(long *)(unaff_x22 + 0x128) + 0x18) == 1) &&
               (uVar7 = FUN_0253316c(), (uVar7 & 1) == 0)) {
              return 1;
            }
          }
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_04665df4(unaff_x25,0,0);
          if (*(long *)(unaff_x22 + 0x128) == 0) goto LAB_02533a18;
          FUN_043c3d70(*(long *)(unaff_x22 + 0x128),unaff_w24,*(undefined8 *)PTR_DAT_06e560c0);
          if (*(long *)(unaff_x22 + 0x120) == 0) goto LAB_02533a18;
          FUN_043c3a94(*(long *)(unaff_x22 + 0x120),unaff_x25,*(undefined8 *)PTR_DAT_06e4df98);
          unaff_w24 = unaff_w24 + -1;
          unaff_w27 = unaff_w27 + -1;
        }
        while( true ) {
          do {
            unaff_w24 = unaff_w24 + 1;
            if (unaff_w27 <= unaff_w24) {
              return 0;
            }
            if (*(char *)(unaff_x22 + 0xe8) == '\0') {
              return 1;
            }
            if (((*(byte *)(unaff_x22 + 0x110) ^ 1) & unaff_w29) != 0) {
              return 0;
            }
            if ((*(long *)(unaff_x22 + 0x128) == 0) ||
               (unaff_x25 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                              (*(long *)(unaff_x22 + 0x128),unaff_w24,*unaff_x26),
               unaff_x25 == (long *)0x0)) goto LAB_02533a18;
            fVar10 = *(float *)((long)unaff_x25 + 0x14);
          } while (((unaff_s8 < fVar10) ||
                   ((0.0 < fVar10 && (*(float *)(unaff_x25 + 3) <= unaff_s9)))) ||
                  ((fVar10 <= 0.0 && (*(float *)(unaff_x25 + 3) < unaff_s9))));
          if ((int)unaff_x25[2] != 2) break;
          if ((unaff_w21 == 0) &&
             ((((*(byte *)(unaff_x22 + 0x2c) == 0 && ((unaff_w20 & 1) == 0)) &&
               ((unaff_x23 & 1) == 0)) ||
              (((*(byte *)(unaff_x22 + 0x2c) & bStack000000000000000c) != 0 &&
               ((unaff_x23 & 1) == 0)))))) {
            FUN_02533a2c(unaff_x25[4]);
          }
        }
        bVar2 = *(byte *)(*(long *)PTR_DAT_06e0b7f0 + 300);
        if ((*(byte *)(*unaff_x25 + 300) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_06e0b7f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(unaff_x25);
        }
        fVar3 = unaff_s8 - fVar10;
        if (unaff_s8 - fVar10 <= unaff_s11) {
          fVar3 = unaff_s11;
        }
        uVar7 = (ulong)(uint)fVar3;
      } while (unaff_s8 < *(float *)(unaff_x25 + 3));
      if (*(char *)((long)unaff_x25 + 0x101) == '\0') {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_046677b8(unaff_x25,1,0);
      }
      param_1 = (ulong)(uint)*(float *)(unaff_x25 + 0x21);
    } while (*(float *)(unaff_x25 + 0x21) <= fVar3);
  } while( true );
}


