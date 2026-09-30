/*
FUNCTION_NAME: OVRVirtualKeyboard.<InitializeGlTFModel>d__92$$System.IDisposable.Dispose
ENTRY_POINT: 053888c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void OVRVirtualKeyboard_<InitializeGlTFModel>d__92__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_x9;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  uint uVar11;
  int iVar12;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x25;
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  piVar10 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_05388900;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05388900:
  iVar3 = (*(code *)*puVar4)();
  iVar12 = (int)unaff_x19;
  if (iVar3 < iVar12) {
    if (*(char *)(*(long *)(*(long *)
                             UnityEngine_UIElements_IUxmlSerializedDataDeserializeReference_TypeInfo
                           + 0xb8) + 4) == '\0') {
      return;
    }
    plVar5 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,2);
    puVar2 = PTR_DAT_067c9338;
    iStack000000000000000c = iVar12;
    lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4);
    if (plVar5 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_05388cb8:
        uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar8,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar6;
        iStack0000000000000008 = iVar3;
        lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_05388cb8;
        puVar2 = PTR_DAT_067c8f48;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
          plVar5[5] = lVar6;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_060a97a4(*(undefined8 *)OVR_OpenVR_IVRCompositor_TypeInfo,plVar5,0);
          return;
        }
      }
LAB_05388bfc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
  else if ((*(long *)(unaff_x20 + 0x20) != 0) &&
          (plVar5 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x38), plVar5 != (long *)0x0)) {
    lVar6 = *plVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05388a5c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*unaff_x25,0);
LAB_05388a5c:
    iVar3 = (*(code *)*puVar4)(plVar5,uVar8,unaff_x19 & 0xffffffff,puVar4[1]);
    if (iVar3 < iVar12) {
      plVar5 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,2);
      puVar2 = PTR_DAT_067c9338;
      iStack000000000000000c = iVar3;
      lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4
                                );
      if (plVar5 != (long *)0x0) {
        if ((lVar6 == 0) ||
           (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 != 0)) {
          if ((int)plVar5[3] != 0) {
            plVar5[4] = lVar6;
            iStack0000000000000008 = iVar12;
            lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_05388cb8;
            puVar2 = PTR_DAT_067c8f48;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
              plVar5[5] = lVar6;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_060aa13c(*(undefined8 *)OVR_OpenVR_IVRDriverManager_TypeInfo,plVar5,0);
              return;
            }
          }
          goto LAB_05388bfc;
        }
        goto LAB_05388cb8;
      }
    }
    else {
      if (iVar12 < 1) {
        fVar14 = -1.0;
      }
      else {
        lVar6 = *(long *)(unaff_x20 + 0x28);
        if (lVar6 == 0) goto LAB_05388c00;
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar9 = 0;
        uVar11 = 0;
        fVar13 = -1.0;
        do {
          if (uVar9 == uVar1) goto LAB_05388bfc;
          fVar14 = fVar13;
          if (0 < unaff_w22) {
            fVar15 = *(float *)(lVar6 + uVar9 * 4 + 0x20);
            iVar12 = 0;
            iVar3 = unaff_w22;
            if (uVar11 <= *(uint *)(unaff_x21 + 0x18)) {
              iVar12 = *(uint *)(unaff_x21 + 0x18) - uVar11;
            }
            do {
              if (iVar12 == 0) goto LAB_05388bfc;
              lVar7 = (long)(int)uVar11;
              uVar11 = uVar11 + 1;
              *(float *)(unaff_x21 + lVar7 * 4 + 0x20) = fVar15;
              fVar14 = fVar15;
              if (fVar15 <= fVar13) {
                fVar14 = fVar13;
              }
              iVar3 = iVar3 + -1;
              fVar13 = fVar14;
              iVar12 = iVar12 + -1;
            } while (iVar3 != 0);
          }
          uVar9 = uVar9 + 1;
          fVar13 = fVar14;
        } while (uVar9 != unaff_x19);
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        *(float *)(*(long *)(unaff_x20 + 0x20) + 0x30) = fVar14;
        return;
      }
    }
  }
LAB_05388c00:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


