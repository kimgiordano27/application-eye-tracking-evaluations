/*
FUNCTION_NAME: Unity.Physics.Systems.BroadphaseSystem.__codegen__OnUpdate_00000B7C$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 03279624
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_Systems_BroadphaseSystem___codegen__OnUpdate_00000B7C_PostfixBurstDelegate___ctor
               (undefined8 param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  float fVar10;
  double dVar11;
  double dVar12;
  int in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x20 + 0x408);
  if ((*(byte *)(unaff_x21 + 0x937) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8408);
    *(undefined1 *)(unaff_x21 + 0x937) = 1;
  }
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar6 = *param_2;
  fVar10 = (float)param_1;
  if (iVar6 < 0x494e5421) {
    if (iVar6 < 0x42595446) {
      if (iVar6 == 0x42495420) {
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = param_2[3];
        if (uVar7 == 1) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar10)) {
            bVar2 = fVar10 < 0.5;
            bVar3 = false;
          }
          goto LAB_032798a8;
        }
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar7 = param_2[3];
        }
        if (fVar10 <= 0.0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)~(uint)(-1L << ((ulong)uVar7 & 0x3f));
          if (fVar10 < 1.0) {
            uVar8 = (ulong)(uint)(int)(fVar10 * (float)uVar8 + 0.0);
          }
        }
        goto LAB_03279aa8;
      }
      if (iVar6 == 0x42595445) {
        if (fVar10 <= 0.0) {
          iVar6 = 0;
        }
        else if (1.0 <= fVar10) {
          iVar6 = 0xff;
        }
        else {
          iVar6 = (int)((double)fVar10 * DAT_00d36f28 + 0.0);
        }
        FUN_03297b98(iVar6,0);
        return;
      }
      goto LAB_03279aec;
    }
    if ((iVar6 == 0x44424c20) || (iVar6 == 0x464c5420)) {
      FUN_03297d90(param_1,0);
      return;
    }
    if (iVar6 != 0x494e5420) goto LAB_03279aec;
    fVar10 = fVar10 * 0.5 + 0.5;
    if (fVar10 <= 0.0) {
      uVar8 = 0x80000000;
      goto LAB_03279aa8;
    }
    if (1.0 <= fVar10) {
      uVar8 = 0x7fffffff;
      goto LAB_03279aa8;
    }
    dVar12 = -2147483648.0;
    dVar11 = (double)fVar10 * DAT_00d37210;
  }
  else {
    if (0x53425954 < iVar6) {
      if (iVar6 == 0x53485254) {
        fVar10 = fVar10 * 0.5 + 0.5;
        if (fVar10 <= 0.0) {
          iVar6 = 0x8000;
        }
        else if (1.0 <= fVar10) {
          iVar6 = 0x7fff;
        }
        else {
          dVar11 = (double)fVar10 * DAT_00d38138 + -32768.0;
          iVar6 = 0;
          if (dVar11 != INFINITY) {
            iVar6 = (int)dVar11;
          }
        }
        FUN_03297be0(iVar6,0);
        return;
      }
      if (iVar6 == 0x55494e54) {
        if (fVar10 <= 0.0) {
          iVar6 = 0;
        }
        else if (1.0 <= fVar10) {
          iVar6 = -1;
        }
        else {
          iVar6 = (int)((double)fVar10 * DAT_00d37210 + 0.0);
        }
        FUN_03298c0c(iVar6,0);
        return;
      }
      if (iVar6 == 0x55534854) {
        if (fVar10 <= 0.0) {
          iVar6 = 0;
        }
        else if (1.0 <= fVar10) {
          iVar6 = 0xffff;
        }
        else {
          iVar6 = (int)((double)fVar10 * DAT_00d38138 + 0.0);
        }
        FUN_03298bf8(iVar6,0);
        return;
      }
LAB_03279aec:
      thunk_FUN_01a6ca08(PTR_DAT_03cd8408);
      FUN_01876390();
      in_stack_00000008 = *param_2;
      uVar4 = thunk_FUN_01a6ca08(DG_Tweening_Plugins_Core_PathCore_ControlPoint___TypeInfo);
      uVar4 = thunk_FUN_01a89a98(uVar4,&stack0x00000008);
      uVar5 = thunk_FUN_01a6ca08(System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo);
      uVar4 = FUN_025b4d3c(uVar5,uVar4,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar5 = thunk_FUN_01a89e68();
      FUN_027a794c(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01a6ca08(System_Runtime_InteropServices_CharSet_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar4);
    }
    if (iVar6 != 0x53424954) {
      if (iVar6 == 0x53425954) {
        fVar10 = fVar10 * 0.5 + 0.5;
        if (fVar10 <= 0.0) {
          iVar6 = 0x80;
        }
        else if (1.0 <= fVar10) {
          iVar6 = 0x7f;
        }
        else {
          dVar11 = (double)fVar10 * DAT_00d36f28 + -128.0;
          iVar6 = 0;
          if (dVar11 != INFINITY) {
            iVar6 = (int)dVar11;
          }
        }
        FUN_03297bbc(iVar6,0);
        return;
      }
      goto LAB_03279aec;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar6 = param_2[3];
    if (iVar6 == 1) {
      bVar3 = NAN(fVar10);
      bVar2 = fVar10 < 0.0;
LAB_032798a8:
      FUN_032966f8(bVar2 == bVar3,0);
      return;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      iVar6 = param_2[3];
    }
    uVar8 = -1L << ((ulong)(iVar6 - 1) & 0x3f);
    uVar7 = (uint)uVar8;
    if (fVar10 <= 0.0) {
      uVar8 = uVar8 & 0xffffffff;
      goto LAB_03279aa8;
    }
    uVar1 = ~uVar7;
    uVar8 = (ulong)uVar1;
    if (1.0 <= fVar10) goto LAB_03279aa8;
    dVar12 = (double)(int)uVar7;
    dVar11 = ((double)(int)uVar1 - dVar12) * (double)fVar10;
  }
  uVar7 = 0x80000000;
  if (dVar11 + dVar12 != INFINITY) {
    uVar7 = (int)(dVar11 + dVar12);
  }
  uVar8 = (ulong)uVar7;
LAB_03279aa8:
  FUN_03297c04(uVar8,0);
  return;
}


