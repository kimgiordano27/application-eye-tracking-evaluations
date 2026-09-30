/*
FUNCTION_NAME: FUN_04560568
ENTRY_POINT: 04560568
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void FUN_04560568(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  
  if ((DAT_06b76a3e & 1) == 0) {
                    /* try { // try from 0456059c to 046605df has its CatchHandler @ 04560644 */
    FUN_02d6084c(PTR_DAT_0676b8d0);
    DAT_06b76a3e = 1;
  }
  iVar14 = (int)param_1[9];
  if (0 < iVar14) {
    uVar9 = 0;
    plVar1 = param_1 + 5;
    do {
      lVar10 = param_1[7];
      if (lVar10 == 0)
      goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_045609dc;
      lVar15 = (long)(int)uVar9;
      plVar11 = (long *)(lVar10 + lVar15 * 0x28 + 0x20);
      lVar5 = *plVar11;
      if (param_2 < lVar5) {
        *(undefined4 *)(lVar10 + lVar15 * 0x28 + 0x38) = 0;
      }
      else {
        piVar12 = (int *)(lVar10 + lVar15 * 0x28 + 0x28);
        if (param_2 < lVar5 + *piVar12) {
          pcVar6 = (char *)(lVar10 + lVar15 * 0x28 + 0x40);
          if (*pcVar6 == '\0') {
            *pcVar6 = '\x01';
            lVar5 = *plVar1;
            if (lVar5 == 0)
            goto 
            System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
            if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_045609dc;
            FUN_0455dee8(param_1,*(undefined8 *)(lVar5 + lVar15 * 8 + 0x20),uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1c0));
          }
          lVar5 = *(long *)(lVar10 + lVar15 * 0x28 + 0x30);
          if (lVar5 == 0)
          goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
          uVar16 = (**(code **)(lVar5 + 0x18))
                             ((float)(param_2 - *plVar11) / (float)*piVar12,
                              *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          *(undefined4 *)(lVar10 + lVar15 * 0x28 + 0x38) = uVar16;
        }
        else {
          lVar10 = param_1[8];
          if (lVar10 == 0)
          goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
          if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_045609dc:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          lVar5 = *plVar1;
          if (lVar5 == 0)
          goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_045609dc;
          lVar13 = lVar10 + lVar15 * 0x40;
          *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(lVar13 + 0x38);
          *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(lVar13 + 0x30);
          (**(code **)(*param_1 + 0x1f8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x200));
          plVar11 = (long *)(lVar5 + lVar15 * 8 + 0x20);
          lVar13 = *plVar11;
          lVar5 = param_1[6];
          if (lVar5 == 0)
          goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_045609dc;
          uVar16 = *(undefined4 *)(lVar5 + lVar15 * 4 + 0x20);
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02d9a2e0();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          lVar5 = *(long *)(lVar7 + 0x1a8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02d9a2e0();
            lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          }
          lVar10 = lVar10 + lVar15 * 0x40;
          FUN_048aa418(*(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                       *(undefined4 *)(lVar10 + 0x38),*(undefined4 *)(lVar10 + 0x3c),param_1 + 0xb,
                       lVar13,uVar16,**(undefined1 **)(lVar5 + 0xb8),*(undefined8 *)(lVar7 + 0x1b0))
          ;
          if ((*plVar11 == 0) || (plVar3 = (long *)FUN_061c32e0(*plVar11,0), plVar3 == (long *)0x0))
          {
System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b8d0) {
                puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
                goto LAB_04560808;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b8d0,0x14);
LAB_04560808:
          iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar10 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b8d0) {
                puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
                goto LAB_04560870;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b8d0,0x15);
LAB_04560870:
          (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
          if ((*plVar11 == 0) || (plVar3 = (long *)FUN_061c32e0(*plVar11,0), plVar3 == (long *)0x0))
          goto System_Comparison<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Invoke;
          lVar10 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b8d0) {
                puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
                goto LAB_045608f0;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b8d0,0x16);
LAB_045608f0:
          iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar10 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b8d0) {
                puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                goto LAB_04560958;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b8d0,0x17);
LAB_04560958:
          (*(code *)*puVar4)(plVar3,iVar2 + 1,puVar4[1]);
          FUN_0455e104(param_1,*plVar11,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1b8));
          FUN_048b4e38(plVar1,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0));
          uVar9 = uVar9 - 1;
          iVar14 = iVar14 + -1;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar14);
  }
  return;
}


