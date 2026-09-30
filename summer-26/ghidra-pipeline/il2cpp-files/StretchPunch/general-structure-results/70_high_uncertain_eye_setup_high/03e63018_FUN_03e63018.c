/*
FUNCTION_NAME: FUN_03e63018
ENTRY_POINT: 03e63018
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 FUN_03e63018(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_044b216b & 1) == 0) {
    FUN_01d7d918(PTR_DAT_042524f8);
    FUN_01d7d918(PTR_DAT_04252500);
    FUN_01d7d918(PTR_DAT_04236170);
    FUN_01d7d918(PTR_DAT_04252508);
    FUN_01d7d918(PTR_DAT_04252510);
    FUN_01d7d918(PTR_DAT_04252518);
    FUN_01d7d918(PTR_DAT_04252520);
    FUN_01d7d918(PTR_DAT_04252528);
    FUN_01d7d918(PTR_DAT_04252458);
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                );
    FUN_01d7d918(StringLiteral_2636);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(PTR_DAT_04252470);
    FUN_01d7d918(PTR_DAT_042522e8);
    DAT_044b216b = 1;
  }
  local_40 = &local_38;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_03e633fc;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_03e6340c;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
      uVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04252520);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (uVar5,*(undefined8 *)PTR_DAT_04252518);
      *(undefined8 *)(local_38 + 0x30) = uVar5;
      thunk_FUN_01e10808((undefined8 *)(local_38 + 0x30),uVar5);
      if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar8 = *(long *)(*(long *)(local_38 + 0x28) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_0236b90c(&local_98,lVar8,*(undefined8 *)PTR_DAT_04252528);
      uStack_68 = uStack_90;
      local_70 = local_98;
      uStack_58 = uStack_80;
      uStack_60 = local_88;
      local_50 = local_78;
      *(undefined8 *)(local_38 + 0x58) = local_78;
      *(undefined8 *)(local_38 + 0x50) = uStack_80;
      *(undefined8 *)(local_38 + 0x48) = local_88;
      *(undefined8 *)(local_38 + 0x40) = uStack_90;
      *(undefined8 *)(local_38 + 0x38) = local_98;
      thunk_FUN_01e10808(local_38 + 0x38,0);
      *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
      while (uVar7 = FUN_02c7e5c8(local_38 + 0x38,*(undefined8 *)PTR_DAT_042524f8), (uVar7 & 1) != 0
            ) {
        *(undefined8 *)(local_38 + 0x68) = *(undefined8 *)(local_38 + 0x50);
        *(undefined8 *)(local_38 + 0x60) = *(undefined8 *)(local_38 + 0x48);
        *(undefined8 *)(local_38 + 0x70) = *(undefined8 *)(local_38 + 0x58);
        thunk_FUN_01e10808(local_38 + 0x60,0);
        puVar3 = 
        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
        ;
        uVar5 = *(undefined8 *)(local_38 + 0x70);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_03d749a8(uVar5,0,0);
        puVar4 = PTR_DAT_04252510;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar7 = FUN_02f17234(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                               *(undefined8 *)PTR_DAT_04252510);
          if ((uVar7 & 1) == 0) {
            if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_02f17d24(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                         *(undefined8 *)PTR_DAT_04252508);
            *(undefined8 *)(local_38 + 0x18) = *(undefined8 *)(local_38 + 0x70);
            thunk_FUN_01e10808();
            *(undefined4 *)(local_38 + 0x10) = 1;
            return 1;
          }
        }
        uVar7 = FUN_0326a75c(*(undefined8 *)(local_38 + 0x68),0);
        if ((uVar7 & 1) == 0) {
          uVar5 = *(undefined8 *)(local_38 + 0x68);
          uVar10 = *(undefined8 *)PTR_DAT_04252470;
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033a87c8(uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_04236170 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar11 = FUN_03daa080(0);
          if (*(int *)(*(long *)StringLiteral_2636 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_03f1284c(uVar11,uVar5,uVar10,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(local_38 + 0x78) = 0;
          }
          else {
            lVar8 = *(long *)PTR_DAT_042522e8;
            bVar2 = *(byte *)(lVar8 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar9 = (long *)0x0;
            }
            else {
              plVar9 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
                plVar9 = (long *)0x0;
              }
            }
            *(long **)(local_38 + 0x78) = plVar9;
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
              plVar6 = (long *)0x0;
            }
          }
          thunk_FUN_01e10808(local_38 + 0x78,plVar6);
          uVar5 = *(undefined8 *)(local_38 + 0x78);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar7 = FUN_03d749a8(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar7 = FUN_02f17234(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                                 *(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              FUN_02f17d24(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                           *(undefined8 *)PTR_DAT_04252508);
              *(undefined8 *)(local_38 + 0x18) = *(undefined8 *)(local_38 + 0x78);
              thunk_FUN_01e10808();
              *(undefined4 *)(local_38 + 0x10) = 2;
              return 1;
            }
          }
LAB_03e633fc:
          *(undefined8 *)(local_38 + 0x78) = 0;
          thunk_FUN_01e10808((undefined8 *)(local_38 + 0x78),0);
        }
LAB_03e6340c:
        *(undefined8 *)(local_38 + 0x60) = 0;
        *(undefined8 *)(local_38 + 0x68) = 0;
        *(undefined8 *)(local_38 + 0x70) = 0;
      }
      FUN_03e635c4();
      *(undefined8 *)(local_38 + 0x58) = 0;
      *(undefined8 *)(local_38 + 0x50) = 0;
      *(undefined8 *)(local_38 + 0x48) = 0;
      *(undefined8 *)(local_38 + 0x40) = 0;
      *(undefined8 *)(local_38 + 0x38) = 0;
    }
  }
  return 0;
}


