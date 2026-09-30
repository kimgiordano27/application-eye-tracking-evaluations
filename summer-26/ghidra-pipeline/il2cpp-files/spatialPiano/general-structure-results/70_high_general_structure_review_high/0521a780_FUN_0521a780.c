/*
FUNCTION_NAME: FUN_0521a780
ENTRY_POINT: 0521a780
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0521a780(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar10;
  undefined8 local_40;
  undefined8 local_38;
  undefined *puVar9;
  
  if ((DAT_06bba7d7 & 1) == 0) {
    FUN_02f08768(System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067ca168);
    FUN_02f08768(System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c97c0);
    FUN_02f08768(System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo);
    DAT_06bba7d7 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0521aa90;
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 0xb) {
    if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_051a4a94(param_3,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar4 = FUN_050656a0(0);
    puVar9 = System_Collections_Generic_List<XRTargetEvaluator>_TypeInfo;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if ((int)uVar4 == 2) {
      lVar5 = FUN_0521ab74(uVar4,param_2);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
                    /* try { // try from 0521a8b4 to 0531a8db has its CatchHandler @ 0521a8b4
                       catch() { ... } // from try @ 0521a8b4 with catch @ 0521a8b4
                       catch() { ... } // from try @ 0521a8ec with catch @ 0521a8b4
                       catch() { ... } // from try @ 0521a93c with catch @ 0521a8b4
                       catch() { ... } // from try @ 0521a964 with catch @ 0521a8b4 */
      if (iVar1 != 9) {
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar4 = FUN_050656a0(0);
        FUN_02a7da48(param_2);
        uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        local_38 = CONCAT44(local_38._4_4_,uVar2);
        uVar8 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
        param_3 = (long *)thunk_FUN_02f44ec4(uVar8,&local_38);
        uVar8 = thunk_FUN_02f6ef30(System_Collections_Generic_List<XRView>_TypeInfo);
        goto LAB_0521ab30;
      }
      plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar6 == (long *)0x0) goto LAB_0521aa90;
      uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
      }
      lVar5 = FUN_050638ec(uVar4,0);
    }
    if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_051a306c(param_3,0);
    plVar6 = param_3;
    if ((uVar3 & 1) != 0) {
      plVar6 = (long *)FUN_050d7c4c(param_3,0);
    }
    if (plVar6 == (long *)0x0) {
LAB_0521aa90:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
    uVar3 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)
                                      System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo
                               ,0);
    if ((uVar3 & 1) != 0) {
      FUN_0521a600(plVar6);
      if (**(long **)(*(long *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo + 0xb8) != 0) {
        lVar10 = *(long *)(**(long **)(*(long *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo +
                                      0xb8) + 0x10);
        plVar6 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
        if (plVar6 != (long *)0x0) {
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar4,0);
          }
          if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar6[4] = lVar5;
          if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0521aa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),plVar6,*(undefined8 *)(lVar10 + 0x28))
            ;
            return uVar4;
          }
        }
      }
      goto LAB_0521aa90;
    }
    uVar4 = *(undefined8 *)System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_050e4454(uVar4,0);
    uVar3 = FUN_050ed374(plVar6,uVar4,0);
    if ((uVar3 & 1) != 0) {
      local_38 = 0;
      FUN_055e077c(&local_38,lVar5,0);
      local_40 = local_38;
      uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)PTR_DAT_067c97c0,&local_40);
      return uVar4;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar4 = FUN_050656a0(0);
    puVar9 = System_Collections_Generic_List<XmlAttribute>_TypeInfo;
  }
  uVar8 = thunk_FUN_02f6ef30(puVar9);
LAB_0521ab30:
  uVar4 = FUN_051b937c(uVar8,uVar4,param_3,0);
  uVar4 = FUN_0515d378(param_2,uVar4,0);
  uVar8 = thunk_FUN_02f6ef30(System_Collections_Generic_List<XmlNode>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar4,uVar8);
}


