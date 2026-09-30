/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._IsSteamVRDrawingControllers$$Invoke
ENTRY_POINT: 0570d880
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long OVR_OpenVR_IVRSystem__IsSteamVRDrawingControllers__Invoke
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iStack000000000000000c;
  
  puVar6 = PTR_DAT_06a00f68;
  if ((DAT_06dbec81 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_06a0d5f0);
    FUN_02d965b8(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00f68);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(PTR_DAT_069fb928);
    FUN_02d965b8(PTR_DAT_069fbb20);
    FUN_02d965b8(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    DAT_06dbec81 = 1;
  }
  lVar8 = *(long *)puVar6;
  iStack000000000000000c = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar6;
  }
  puVar6 = PTR_DAT_06a00f70;
  if (*(int *)(*(long *)(lVar8 + 0xb8) + 0x120) == 1) {
    iStack000000000000000c = 0;
    if (*(int *)(*(long *)PTR_DAT_06a00f70 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_0576e5c0(param_2,0,&stack0x0000000c,0);
    iVar3 = iStack000000000000000c;
    puVar7 = Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    if (((uVar9 & 1) != 0) && (0 < iStack000000000000000c)) {
      lVar8 = *(long *)Mono_Net_Security_AsyncWriteRequest_TypeInfo;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar7;
      }
      lVar12 = *(long *)(*(int **)(lVar8 + 0xb8) + 2);
      if (lVar12 == 0) {
LAB_0570dc34:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar3 = **(int **)(lVar8 + 0xb8) * iVar3;
      if (*(int *)(lVar12 + 0x14) < iVar3) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_0570dc34;
        }
        FUN_05713240(lVar12,iVar3);
        lVar8 = *(long *)puVar7;
      }
      iVar3 = iStack000000000000000c;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar7;
      }
      lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_0570dc34;
      iVar3 = iVar3 * 3;
      if (*(int *)(lVar12 + 0x18) < iVar3) {
        uVar10 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb928,iVar3);
        lVar8 = *(long *)puVar7;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar8);
          lVar8 = *(long *)puVar7;
        }
        puVar11 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
        *puVar11 = uVar10;
        LeanTween__value(puVar11,uVar10);
        lVar8 = *(long *)puVar7;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar7;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_0570dc34;
      if (*(int *)(lVar8 + 0x14) < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 0x18);
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_0576e5c0(param_2,uVar10,&stack0x0000000c,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *(long *)puVar7;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)puVar7;
        }
        lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x14) < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(lVar12 + 0x18);
          }
          uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
          if (*(int *)(*(long *)PTR_DAT_06a0d5f0 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0540c720(uVar10,uVar13,0,iVar3,0);
          lVar8 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fbb20,iStack000000000000000c);
          if (iStack000000000000000c < 1) {
            return lVar8;
          }
          uVar9 = 0;
          uVar15 = 2;
          pfVar14 = (float *)(lVar8 + 0x28);
          while( true ) {
            lVar12 = *(long *)puVar7;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar12 = *(long *)puVar7;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar12 == 0) break;
            uVar2 = *(uint *)(lVar12 + 0x18);
            uVar4 = uVar15 - 2;
            if (((uVar2 <= uVar4) || (uVar5 = uVar15 - 1, uVar2 <= uVar5)) || (uVar2 <= uVar15)) {
LAB_0570dc30:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0570dc30;
            lVar1 = (long)(int)uVar15;
            uVar9 = uVar9 + 1;
            uVar15 = uVar15 + 3;
            fVar16 = *(float *)(lVar12 + lVar1 * 4 + 0x20);
            fVar17 = *(float *)(lVar12 + (long)(int)uVar5 * 4 + 0x20);
            pfVar14[-2] = *(float *)(lVar12 + (long)(int)uVar4 * 4 + 0x20);
            pfVar14[-1] = fVar17;
            *pfVar14 = -fVar16;
            pfVar14 = pfVar14 + 3;
            if ((long)iStack000000000000000c <= (long)uVar9) {
              return lVar8;
            }
          }
        }
        goto LAB_0570dc34;
      }
    }
    lVar8 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fbb20,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630bbe4(*(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo,0);
    lVar8 = 0;
  }
  return lVar8;
}


