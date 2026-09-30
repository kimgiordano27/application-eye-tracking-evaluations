/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 033d24a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__LocateSpace(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  short *psVar11;
  int *piVar12;
  uint *puVar13;
  ulong *puVar14;
  float *pfVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  long *unaff_x19;
  long unaff_x21;
  float fVar19;
  double dVar20;
  double in_stack_00000008;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x348));
  FUN_01d7d918(Field_UnityEngine_SecondarySpriteTexture_texture);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_1875);
  FUN_01d7d918(StringLiteral_1454);
  FUN_01d7d918(StringLiteral_842);
  *(undefined1 *)(unaff_x21 + 0xa26) = 1;
  if ((unaff_x19 == (long *)0x0) ||
     (plVar4 = (long *)thunk_FUN_01dfff04(),
     puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
     , plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar4 = (long *)FUN_033c59f4(plVar4);
    lVar18 = *(long *)puVar1;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar18);
    }
    uVar5 = FUN_033aa3b4(plVar4);
    if ((uVar5 & 1) != 0) {
      return unaff_x19;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar2 = FUN_033acf6c(plVar4,0);
  uVar3 = FUN_033acf6c();
  switch(uVar3) {
  case 4:
    if (iVar2 == 8) {
      return unaff_x19;
    }
    if (iVar2 != 6) {
      return (long *)0x0;
    }
    if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
    goto LAB_033d2ecc;
    pbVar6 = (byte *)thunk_FUN_01de290c();
    uVar16 = (ushort)*pbVar6;
    puVar10 = (undefined8 *)StringLiteral_1167;
    break;
  default:
LAB_033d2e78:
    return (long *)0x0;
  case 7:
    if (iVar2 == 5) {
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1173 + 0x40))
      goto LAB_033d2ecc;
      pcVar7 = (char *)thunk_FUN_01de290c();
      uVar16 = (ushort)*pcVar7;
      puVar10 = (undefined8 *)StringLiteral_1169;
    }
    else {
      if (iVar2 != 6) {
        return (long *)0x0;
      }
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      uVar16 = (ushort)*pbVar6;
      puVar10 = (undefined8 *)StringLiteral_1169;
    }
    break;
  case 8:
    if (iVar2 == 4) {
      return unaff_x19;
    }
    if (iVar2 != 6) {
      return (long *)0x0;
    }
    if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
    goto LAB_033d2ecc;
    pbVar6 = (byte *)thunk_FUN_01de290c();
    uVar16 = (ushort)*pbVar6;
    puVar10 = (undefined8 *)StringLiteral_1875;
    break;
  case 9:
    switch(iVar2) {
    case 4:
      plVar4 = (long *)StringLiteral_1167;
      goto LAB_033d2988;
    case 5:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1173 + 0x40))
      goto LAB_033d2ecc;
      pcVar7 = (char *)thunk_FUN_01de290c();
      uVar17 = (uint)*pcVar7;
      break;
    case 6:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      uVar17 = (uint)*pbVar6;
      break;
    case 7:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1169 + 0x40))
      goto LAB_033d2ecc;
      psVar11 = (short *)thunk_FUN_01de290c();
      uVar17 = (uint)*psVar11;
      break;
    case 8:
      plVar4 = (long *)StringLiteral_1875;
LAB_033d2988:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) {
LAB_033d2ecc:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c();
      }
      puVar8 = (ushort *)thunk_FUN_01de290c();
      uVar17 = (uint)*puVar8;
      break;
    default:
      goto LAB_033d2e78;
    }
    puVar10 = (undefined8 *)
              Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap;
LAB_033d29b4:
    uVar9 = *puVar10;
    in_stack_00000008 = (double)CONCAT44(in_stack_00000008._4_4_,uVar17);
    goto FUN_033d2e6c;
  case 10:
    plVar4 = (long *)StringLiteral_1167;
    if ((iVar2 == 4) || (plVar4 = (long *)StringLiteral_1875, iVar2 == 8)) {
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) goto LAB_033d2ecc;
      puVar8 = (ushort *)thunk_FUN_01de290c();
      uVar17 = (uint)*puVar8;
    }
    else {
      if (iVar2 != 6) {
        return (long *)0x0;
      }
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      uVar17 = (uint)*pbVar6;
    }
    puVar10 = (undefined8 *)StringLiteral_1454;
    goto LAB_033d29b4;
  case 0xb:
    switch(iVar2) {
    case 4:
      plVar4 = (long *)StringLiteral_1167;
      goto LAB_033d2a58;
    case 5:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1173 + 0x40))
      goto LAB_033d2ecc;
      pcVar7 = (char *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(long)*pcVar7;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    case 6:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*pbVar6;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    case 7:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1169 + 0x40))
      goto LAB_033d2ecc;
      psVar11 = (short *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(long)*psVar11;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    case 8:
      plVar4 = (long *)StringLiteral_1875;
LAB_033d2a58:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) goto LAB_033d2ecc;
      puVar8 = (ushort *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*puVar8;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    case 9:
      if (*(long *)(*unaff_x19 + 0x40) !=
          *(long *)(*(long *)
                     Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                   + 0x40)) goto LAB_033d2ecc;
      piVar12 = (int *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(long)*piVar12;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    case 10:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1454 + 0x40))
      goto LAB_033d2ecc;
      puVar13 = (uint *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*puVar13;
      puVar10 = (undefined8 *)StringLiteral_1160;
      break;
    default:
      goto LAB_033d2e78;
    }
LAB_033d2ae4:
    uVar9 = *puVar10;
    goto FUN_033d2e6c;
  case 0xc:
    switch(iVar2) {
    case 4:
      plVar4 = (long *)StringLiteral_1167;
      goto LAB_033d2890;
    default:
      goto LAB_033d2e78;
    case 6:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*pbVar6;
      puVar10 = (undefined8 *)StringLiteral_842;
      break;
    case 8:
      plVar4 = (long *)StringLiteral_1875;
LAB_033d2890:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) goto LAB_033d2ecc;
      puVar8 = (ushort *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*puVar8;
      puVar10 = (undefined8 *)StringLiteral_842;
      break;
    case 10:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1454 + 0x40))
      goto LAB_033d2ecc;
      puVar13 = (uint *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)(ulong)*puVar13;
      puVar10 = (undefined8 *)StringLiteral_842;
    }
    goto LAB_033d2ae4;
  case 0xd:
    switch(iVar2) {
    case 4:
      plVar4 = (long *)StringLiteral_1167;
      goto LAB_033d2b94;
    case 5:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1173 + 0x40))
      goto LAB_033d2ecc;
      pcVar7 = (char *)thunk_FUN_01de290c();
      iVar2 = (int)*pcVar7;
      goto FUN_033d2b7c;
    case 6:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      uVar17 = (uint)*pbVar6;
      break;
    case 7:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1169 + 0x40))
      goto LAB_033d2ecc;
      psVar11 = (short *)thunk_FUN_01de290c();
      iVar2 = (int)*psVar11;
FUN_033d2b7c:
      fVar19 = (float)iVar2;
LAB_033d2c70:
      uVar9 = *(undefined8 *)Field_UnityEngine_SecondarySpriteTexture_texture;
      goto LAB_033d2cb8;
    case 8:
      plVar4 = (long *)StringLiteral_1875;
LAB_033d2b94:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) goto LAB_033d2ecc;
      puVar8 = (ushort *)thunk_FUN_01de290c();
      uVar17 = (uint)*puVar8;
      break;
    case 9:
      if (*(long *)(*unaff_x19 + 0x40) !=
          *(long *)(*(long *)
                     Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                   + 0x40)) goto LAB_033d2ecc;
      piVar12 = (int *)thunk_FUN_01de290c();
      fVar19 = (float)*piVar12;
      goto LAB_033d2c30;
    case 10:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1454 + 0x40))
      goto LAB_033d2ecc;
      puVar13 = (uint *)thunk_FUN_01de290c();
      uVar17 = *puVar13;
      break;
    case 0xb:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1160 + 0x40))
      goto LAB_033d2ecc;
      plVar4 = (long *)thunk_FUN_01de290c();
      fVar19 = (float)*plVar4;
      goto LAB_033d2c70;
    case 0xc:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_842 + 0x40))
      goto LAB_033d2ecc;
      puVar10 = (undefined8 *)thunk_FUN_01de290c();
      dVar20 = (double)NEON_ucvtf(*puVar10);
      uVar9 = *(undefined8 *)Field_UnityEngine_SecondarySpriteTexture_texture;
      fVar19 = (float)dVar20;
      goto LAB_033d2cb8;
    default:
      goto LAB_033d2e78;
    }
    fVar19 = (float)NEON_ucvtf(uVar17);
LAB_033d2c30:
    uVar9 = *(undefined8 *)Field_UnityEngine_SecondarySpriteTexture_texture;
LAB_033d2cb8:
    in_stack_00000008 = (double)CONCAT44(in_stack_00000008._4_4_,fVar19);
    goto FUN_033d2e6c;
  case 0xe:
    switch(iVar2) {
    case 4:
      plVar4 = (long *)StringLiteral_1167;
      goto LAB_033d2d58;
    case 5:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1173 + 0x40))
      goto LAB_033d2ecc;
      pcVar7 = (char *)thunk_FUN_01de290c();
      iVar2 = (int)*pcVar7;
      goto LAB_033d2dac;
    case 6:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_595 + 0x40))
      goto LAB_033d2ecc;
      pbVar6 = (byte *)thunk_FUN_01de290c();
      uVar5 = (ulong)*pbVar6;
      break;
    case 7:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1169 + 0x40))
      goto LAB_033d2ecc;
      psVar11 = (short *)thunk_FUN_01de290c();
      iVar2 = (int)*psVar11;
      goto LAB_033d2dac;
    case 8:
      plVar4 = (long *)StringLiteral_1875;
LAB_033d2d58:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*plVar4 + 0x40)) goto LAB_033d2ecc;
      puVar8 = (ushort *)thunk_FUN_01de290c();
      uVar5 = (ulong)*puVar8;
      break;
    case 9:
      if (*(long *)(*unaff_x19 + 0x40) !=
          *(long *)(*(long *)
                     Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                   + 0x40)) goto LAB_033d2ecc;
      piVar12 = (int *)thunk_FUN_01de290c();
      iVar2 = *piVar12;
LAB_033d2dac:
      in_stack_00000008 = (double)iVar2;
      uVar9 = *(undefined8 *)
               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
      ;
      goto FUN_033d2e6c;
    case 10:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1454 + 0x40))
      goto LAB_033d2ecc;
      puVar13 = (uint *)thunk_FUN_01de290c();
      uVar5 = (ulong)*puVar13;
      break;
    case 0xb:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_1160 + 0x40))
      goto LAB_033d2ecc;
      plVar4 = (long *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)*plVar4;
      goto LAB_033d2e64;
    case 0xc:
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)StringLiteral_842 + 0x40))
      goto LAB_033d2ecc;
      puVar14 = (ulong *)thunk_FUN_01de290c();
      uVar5 = *puVar14;
      break;
    case 0xd:
      if (*(long *)(*unaff_x19 + 0x40) !=
          *(long *)(*(long *)Field_UnityEngine_SecondarySpriteTexture_texture + 0x40))
      goto LAB_033d2ecc;
      pfVar15 = (float *)thunk_FUN_01de290c();
      in_stack_00000008 = (double)*pfVar15;
      goto LAB_033d2e64;
    default:
      goto LAB_033d2e78;
    }
    in_stack_00000008 = (double)NEON_ucvtf(uVar5);
LAB_033d2e64:
    uVar9 = *(undefined8 *)
             Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
    ;
    goto FUN_033d2e6c;
  }
  uVar9 = *puVar10;
  in_stack_00000008 = (double)CONCAT62(in_stack_00000008._2_6_,uVar16);
FUN_033d2e6c:
  plVar4 = (long *)thunk_FUN_01de23e8(uVar9,&stack0x00000008);
  return plVar4;
}


