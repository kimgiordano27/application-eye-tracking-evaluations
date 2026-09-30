/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.RectOffset_DirectConverter$$DoDeserialize
ENTRY_POINT: 039fb6e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


long Unity_VisualScripting_FullSerializer_RectOffset_DirectConverter__DoDeserialize
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x25 + 0x980);
  uVar3 = FUN_03d78284(param_1,0);
  uVar3 = FUN_032797dc(*unaff_x21,uVar3,*unaff_x22,0);
  plVar4 = (long *)FUN_01d7d9bc(*unaff_x23,1);
  uVar10 = *unaff_x24;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*plVar11);
  }
  lVar5 = FUN_033a87c8(uVar10,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,0);
    }
    puVar1 = Field_System_Runtime_CompilerServices_AsyncMethodBuilderCore_m_stateMachine;
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar4[4] = lVar5;
    thunk_FUN_01e10808(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    FUN_03d74e98(lVar5,uVar3,plVar4,0);
    puVar1 = PTR_DAT_04236ad8;
    if (lVar5 != 0) {
      FUN_03d78f34(lVar5,0x34,0);
      lVar6 = FUN_020d7fa0(lVar5,*(undefined8 *)puVar1);
      lVar7 = FUN_03d74af4(lVar5,0);
      if ((unaff_x19 != 0) && (uVar3 = FUN_039aba2c(), lVar7 != 0)) {
        FUN_03d7f6d0(lVar7,uVar3,0,0);
        lVar7 = FUN_03d74af4(lVar5,0);
        if (DAT_044a2dbb == '\0') {
          FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
          DAT_044a2dbb = '\x01';
        }
        puVar1 = Field_System_AppDomainSetup_domain_initializer_args;
        if (lVar7 != 0) {
          puVar8 = *(undefined4 **)
                    (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
          FUN_03d7e440(*puVar8,puVar8[1],puVar8[2],lVar7,0);
          lVar7 = FUN_03d74af4(lVar5,0);
          if (DAT_044a2db9 == '\0') {
            FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
            DAT_044a2db9 = '\x01';
          }
          if (lVar7 != 0) {
            puVar8 = *(undefined4 **)
                      (*(long *)
                        Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField +
                      0xb8);
            FUN_03d7f0d0(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar7,0);
            lVar7 = FUN_03d74af4(lVar5,0);
            if (DAT_044a2dba == '\0') {
              FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
              DAT_044a2dba = '\x01';
            }
            if (lVar7 != 0) {
              lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
              FUN_03d7f464(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                           *(undefined4 *)(lVar9 + 0x14),lVar7,0);
              lVar7 = FUN_03d71c9c();
              if (lVar7 != 0) {
                uVar2 = FUN_03d74b30(lVar7,0);
                UnityEngine_UIElements_UIR_RenderChain__set_vertsPool(lVar5,uVar2,0);
                if (lVar6 != 0) {
                  *(long *)(lVar6 + 0x70) = unaff_x19;
                  thunk_FUN_01e10808();
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(unaff_x20 + 8);
                  thunk_FUN_01e10808();
                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(unaff_x20 + 0x10);
                  thunk_FUN_01e10808();
                  *(byte *)(lVar6 + 0x50) = *(byte *)(unaff_x20 + 0x20) & 1;
                  FUN_039fb158(lVar6,*(undefined8 *)(unaff_x20 + 0x18));
                  lVar5 = FUN_039fb304(lVar6);
                  lVar7 = FUN_039ab4c8();
                  if ((lVar7 != 0) && (uVar2 = FUN_03d4f428(lVar7,0), lVar5 != 0)) {
                    FUN_03d4f464(lVar5,uVar2,0);
                    lVar5 = FUN_039fb304(lVar6);
                    lVar7 = FUN_039ab4c8();
                    if ((lVar7 != 0) && (uVar2 = FUN_03d4f4a8(lVar7,0), lVar5 != 0)) {
                      FUN_03d4f4e4(lVar5,uVar2,0);
                      return lVar6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


