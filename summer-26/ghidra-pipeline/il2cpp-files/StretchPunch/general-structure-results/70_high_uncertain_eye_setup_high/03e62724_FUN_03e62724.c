/*
FUNCTION_NAME: FUN_03e62724
ENTRY_POINT: 03e62724
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_03e62724(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  long *plStack_38;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_044b2166 & 1) == 0) {
    FUN_01d7d918(PTR_DAT_04252330);
    FUN_01d7d918(StringLiteral_3585);
    FUN_01d7d918(PTR_DAT_042524a0);
    FUN_01d7d918(PTR_DAT_04252338);
    FUN_01d7d918(StringLiteral_3586);
    FUN_01d7d918(PTR_DAT_042524a8);
    FUN_01d7d918(PTR_DAT_04236170);
    FUN_01d7d918(PTR_DAT_042524b0);
    FUN_01d7d918(PTR_DAT_042524b8);
    FUN_01d7d918(PTR_DAT_042524c0);
    FUN_01d7d918(PTR_DAT_042524c8);
    FUN_01d7d918(PTR_DAT_04252350);
    FUN_01d7d918(StringLiteral_3587);
    FUN_01d7d918(PTR_DAT_042524d0);
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                );
    FUN_01d7d918(StringLiteral_2636);
    FUN_01d7d918(PTR_DAT_042524d8);
    FUN_01d7d918(PTR_DAT_042524e0);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044b2166 = 1;
  }
  puVar3 = PTR_DAT_042524b8;
  plStack_38 = &local_28;
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
    goto LAB_03e62cd8;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto LAB_03e629f4;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042524c8);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (uVar4,*(undefined8 *)PTR_DAT_042524c0);
    *(undefined8 *)(local_28 + 0x30) = uVar4;
    thunk_FUN_01e10808((undefined8 *)(local_28 + 0x30),uVar4);
    if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar5 = *(long *)(*(long *)(local_28 + 0x28) + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_0319996c(&local_78,lVar5,*(undefined8 *)PTR_DAT_04252350);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    *(undefined8 *)(local_28 + 0x48) = local_68;
    *(undefined8 *)(local_28 + 0x40) = uStack_70;
    *(undefined8 *)(local_28 + 0x38) = local_78;
    thunk_FUN_01e10808(local_28 + 0x38,0);
    *(undefined4 *)(local_28 + 0x10) = 0xfffffffd;
    while (uVar7 = FUN_02c52b88(local_28 + 0x38,*(undefined8 *)PTR_DAT_04252330), (uVar7 & 1) != 0)
    {
      *(undefined8 *)(local_28 + 0x50) = *(undefined8 *)(local_28 + 0x48);
      thunk_FUN_01e10808();
      lVar5 = *(long *)(local_28 + 0x50);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(long *)(lVar5 + 0x60) != 0) {
        lVar5 = FUN_03e5d120(lVar5);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_0319996c(&local_78,lVar5,*(undefined8 *)PTR_DAT_042524d0);
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        *(undefined8 *)(local_28 + 0x68) = local_68;
        *(undefined8 *)(local_28 + 0x60) = uStack_70;
        *(undefined8 *)(local_28 + 0x58) = local_78;
        thunk_FUN_01e10808(local_28 + 0x58,0);
        *(undefined4 *)(local_28 + 0x10) = 0xfffffffc;
        while (uVar7 = FUN_02c52b88(local_28 + 0x58,*(undefined8 *)PTR_DAT_042524a0),
              (uVar7 & 1) != 0) {
          *(undefined8 *)(local_28 + 0x70) = *(undefined8 *)(local_28 + 0x68);
          thunk_FUN_01e10808();
          if (*(long *)(local_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar7 = FUN_02f17234(*(long *)(local_28 + 0x30),*(undefined8 *)(local_28 + 0x70),
                               *(undefined8 *)puVar3);
          param_1 = local_28;
          if ((uVar7 & 1) == 0) {
            if (*(long *)(local_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_02f17d24(*(long *)(local_28 + 0x30),*(undefined8 *)(local_28 + 0x70),
                         *(undefined8 *)PTR_DAT_042524b0);
            *(undefined8 *)(local_28 + 0x18) = *(undefined8 *)(local_28 + 0x70);
            thunk_FUN_01e10808();
            *(undefined4 *)(local_28 + 0x10) = 1;
            return 1;
          }
LAB_03e629f4:
          *(undefined8 *)(param_1 + 0x70) = 0;
          thunk_FUN_01e10808((undefined8 *)(param_1 + 0x70),0);
        }
        FUN_03e62e0c();
        lVar5 = *(long *)(local_28 + 0x50);
        *(undefined8 *)(local_28 + 0x58) = 0;
        *(undefined8 *)(local_28 + 0x60) = 0;
        *(undefined8 *)(local_28 + 0x68) = 0;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
      }
      if (*(long *)(lVar5 + 0x58) != 0) {
        lVar5 = FUN_03e5d08c(lVar5);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_0319996c(&local_78,lVar5,*(undefined8 *)StringLiteral_3587);
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        *(undefined8 *)(local_28 + 0x88) = local_68;
        *(undefined8 *)(local_28 + 0x80) = uStack_70;
        *(undefined8 *)(local_28 + 0x78) = local_78;
        thunk_FUN_01e10808(local_28 + 0x78,0);
        *(undefined4 *)(local_28 + 0x10) = 0xfffffffb;
        while (uVar7 = FUN_02c52b88(local_28 + 0x78,*(undefined8 *)StringLiteral_3585),
              (uVar7 & 1) != 0) {
          *(undefined8 *)(local_28 + 0x90) = *(undefined8 *)(local_28 + 0x88);
          thunk_FUN_01e10808();
          uVar4 = *(undefined8 *)(local_28 + 0x90);
          uVar9 = *(undefined8 *)PTR_DAT_042524d8;
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033a87c8(uVar9,0);
          if (*(int *)(*(long *)PTR_DAT_04236170 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_03daa080(0);
          if (*(int *)(*(long *)StringLiteral_2636 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_03f1284c(uVar10,uVar4,uVar9,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(local_28 + 0x98) = 0;
          }
          else {
            lVar5 = *(long *)PTR_DAT_042524e0;
            bVar2 = *(byte *)(lVar5 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar5) {
                plVar8 = (long *)0x0;
              }
            }
            *(long **)(local_28 + 0x98) = plVar8;
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar5) {
              plVar6 = (long *)0x0;
            }
          }
          thunk_FUN_01e10808(local_28 + 0x98,plVar6);
          uVar4 = *(undefined8 *)(local_28 + 0x98);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar7 = FUN_03d749a8(uVar4,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(local_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar7 = FUN_02f17234(*(long *)(local_28 + 0x30),*(undefined8 *)(local_28 + 0x98),
                                 *(undefined8 *)puVar3);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(local_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              FUN_02f17d24(*(long *)(local_28 + 0x30),*(undefined8 *)(local_28 + 0x98),
                           *(undefined8 *)PTR_DAT_042524b0);
              *(undefined8 *)(local_28 + 0x18) = *(undefined8 *)(local_28 + 0x98);
              thunk_FUN_01e10808();
              *(undefined4 *)(local_28 + 0x10) = 2;
              return 1;
            }
          }
LAB_03e62cd8:
          *(undefined8 *)(local_28 + 0x98) = 0;
          thunk_FUN_01e10808((undefined8 *)(local_28 + 0x98),0);
          *(undefined8 *)(local_28 + 0x90) = 0;
          thunk_FUN_01e10808((undefined8 *)(local_28 + 0x90),0);
        }
        FUN_03e62e5c();
        *(undefined8 *)(local_28 + 0x78) = 0;
        *(undefined8 *)(local_28 + 0x80) = 0;
        *(undefined8 *)(local_28 + 0x88) = 0;
      }
      *(undefined8 *)(local_28 + 0x50) = 0;
      thunk_FUN_01e10808((undefined8 *)(local_28 + 0x50),0);
    }
    FUN_03e62eac();
    *(undefined8 *)(local_28 + 0x38) = 0;
    *(undefined8 *)(local_28 + 0x40) = 0;
    *(undefined8 *)(local_28 + 0x48) = 0;
  }
  return 0;
}


