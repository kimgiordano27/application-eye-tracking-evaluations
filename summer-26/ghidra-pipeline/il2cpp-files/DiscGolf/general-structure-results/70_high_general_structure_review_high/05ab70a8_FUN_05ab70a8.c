/*
FUNCTION_NAME: FUN_05ab70a8
ENTRY_POINT: 05ab70a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_10;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


long * FUN_05ab70a8(undefined8 param_1,uint param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 param_6,long param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  uint uVar23;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* try { // try from 05ab70a8 to 05bb70b3 has its CatchHandler @ 05ab7220 */
                    /* try { // try from 05ab70b8 to 05bb70c3 has its CatchHandler @ 05ab721c */
                    /* try { // try from 05ab70c8 to 05bb70d3 has its CatchHandler @ 05ab7218 */
  lVar20 = tpidr_el0;
  local_68 = *(long *)(lVar20 + 0x28);
                    /* try { // try from 05ab70e4 to 05bb70ef has its CatchHandler @ 05ab7210 */
  local_80 = param_7;
  if ((DAT_06dc1dde & 1) == 0) {
                    /* try { // try from 05ab70fc to 05bb711b has its CatchHandler @ 05ab7214 */
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                );
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                );
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupRef_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    DAT_06dc1dde = 1;
  }
  puVar19 = PTR_DAT_06a10f28;
  if (param_3 == (long *)0x0) goto LAB_05ab7d04;
  uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  uVar11 = thunk_FUN_0536b75c(uVar10,*(undefined8 *)puVar19,0);
  if ((uVar11 & 1) != 0) {
    thunk_FUN_02dfd288(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                      );
    uVar10 = thunk_FUN_02dd3144();
    puVar19 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WrappedDistributedAuthorityService_<JoinSessionForLobbyIdAsync>d__13>__
    ;
LAB_05ab8060:
    uVar21 = thunk_FUN_02dfd288(puVar19);
    FUN_05ab1b08(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
LAB_05ab807c:
    if (lVar20 == local_68) {
      uVar21 = thunk_FUN_02dfd288(
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar10,uVar21);
    }
    goto LAB_05ab80e8;
  }
  uVar3 = *param_5;
  plVar12 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                        OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo
                                      );
  FUN_05b08194(plVar12,0);
  puVar19 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
  ;
  if ((param_4 == 0) || (*(long *)(param_4 + 0xa0) == 0)) goto LAB_05ab7d04;
  uVar10 = thunk_FUN_02da6564(*(long *)(param_4 + 0xa0),0);
  puVar6 = PTR_DAT_069fb9c0;
  uVar21 = *(undefined8 *)puVar19;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar21 = FUN_054f73b4(uVar21,0);
  uVar11 = FUN_055006dc(uVar10,uVar21,0);
  if ((uVar11 & 1) == 0) {
    thunk_FUN_02dfd288(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                      );
    uVar10 = thunk_FUN_02dd3144();
    puVar19 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__;
    goto LAB_05ab8060;
  }
  lVar13 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  if (lVar13 == 0) goto LAB_05ab7d04;
  plVar22 = *(long **)(param_4 + 0xa0);
  lVar1 = 0;
  if (*(int *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13;
  }
  if (plVar22 == (long *)0x0) goto LAB_05ab7d04;
  lVar13 = *plVar22;
  bVar4 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo + 0x130);
  if ((*(byte *)(lVar13 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
      *(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo)) {
LAB_05ab80a0:
    if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar22);
    }
    goto LAB_05ab80e8;
  }
  lVar13 = (**(code **)(lVar13 + 0x238))(plVar22,*(undefined8 *)(lVar13 + 0x240));
  if (lVar13 == 0) goto LAB_05ab7d04;
  iVar8 = FUN_05489ff8(lVar13,0);
  if ((iVar8 < 1) && ((param_2 & 1) == 0)) {
    *param_5 = 0;
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
    uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    plVar16 = (long *)FUN_05ab1b3c(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff);
    lVar13 = *(long *)PTR_DAT_069ff840;
    plVar12 = (long *)PTR_DAT_069ff840;
    if (*(int *)(lVar13 + 0xe4) == 0) {
LAB_05ab733c:
      plVar12 = (long *)PTR_DAT_069ff840;
      thunk_FUN_02df485c(lVar13);
    }
LAB_05ab7340:
    if (plVar16 != (long *)0x0) {
      FUN_05b121a0(plVar16,**(undefined8 **)(*plVar12 + 0xb8),(*(undefined8 **)(*plVar12 + 0xb8))[1]
                   ,0);
      goto LAB_05ab735c;
    }
    goto LAB_05ab7d04;
  }
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if ((plVar16 == (long *)0x0) ||
     (lVar13 = (**(code **)(*plVar16 + 0x308))(plVar16,0,*(undefined8 *)(*plVar16 + 0x310)),
     lVar13 == 0)) goto LAB_05ab7d04;
  uVar10 = thunk_FUN_02da6564(lVar13,0);
  uVar21 = *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
  ;
  if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(puVar6 + 0xe0));
  }
  uVar21 = FUN_054f73b4(uVar21,0);
  uVar11 = FUN_055006dc(uVar10,uVar21,0);
  if ((uVar11 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if ((plVar12 != (long *)0x0) &&
       (plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,0,*(undefined8 *)(*plVar12 + 0x310)),
       plVar22 != (long *)0x0)) {
      bVar4 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo))
      goto LAB_05ab80a0;
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      puVar19 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
      if (lVar13 != 0) {
        iVar8 = 0;
        do {
          iVar9 = FUN_05489ff8(lVar13,0);
          if (iVar9 <= iVar8) {
            uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
            if (*(long *)(lVar20 + 0x28) == local_68) {
              plVar12 = (long *)FUN_05ab1b3c(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff)
              ;
              return plVar12;
            }
            goto LAB_05ab80e8;
          }
          plVar12 = (long *)(**(code **)(*plVar22 + 0x238))
                                      (plVar22,*(undefined8 *)(*plVar22 + 0x240));
          if (plVar12 == (long *)0x0) break;
          plVar17 = (long *)(**(code **)(*plVar12 + 0x308))
                                      (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
          if (plVar17 == (long *)0x0) {
LAB_05ab8044:
            thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                              );
            uVar10 = thunk_FUN_02dd3144();
            puVar19 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
            ;
            goto LAB_05ab8060;
          }
          bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
          goto LAB_05ab8044;
          lVar13 = plVar17[0x13];
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_0536b75c(lVar13,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (param_7 == 0) break;
            uVar11 = thunk_FUN_0536b75c(*(undefined8 *)(param_7 + 0x48),lVar1,0);
            if ((uVar11 & 1) != 0) {
              FUN_05ab2148(param_1,plVar17,0,param_7);
              plVar16 = plVar17;
              goto LAB_05ab7e3c;
            }
          }
          if (plVar17[0x14] == 0) break;
          uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (plVar17[0x14] == 0) break;
            uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
            uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar16 = (long *)FUN_05ab5ee8(param_1,lVar1,uVar10,&local_80);
              FUN_05ab2148(param_1,plVar16,0,local_80);
              goto LAB_05ab7f50;
            }
          }
          iVar8 = iVar8 + 1;
          lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        } while (lVar13 != 0);
      }
    }
    goto LAB_05ab7d04;
  }
  uVar23 = *param_5;
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if (plVar16 == (long *)0x0) goto LAB_05ab79dc;
  uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                              (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
  puVar6 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo;
  puVar19 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
  if (plVar16 == (long *)0x0) {
LAB_05ab8004:
    thunk_FUN_02dfd288(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                      );
    uVar10 = thunk_FUN_02dd3144();
    uVar21 = thunk_FUN_02dfd288(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                               );
    FUN_05ab1b08(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
    goto LAB_05ab807c;
  }
  bVar4 = *(byte *)(*plVar16 + 0x130);
  bVar5 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo +
                   0x130);
  if ((bVar4 < bVar5) ||
     (lVar13 = *(long *)(*plVar16 + 200),
     *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) !=
     *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo))
  goto LAB_05ab8004;
  bVar5 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo + 0x130);
  if ((bVar4 < bVar5) ||
     (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) !=
      *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo)) goto LAB_05ab8004;
  lVar13 = plVar16[0x13];
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  uVar11 = thunk_FUN_0536b75c(lVar13,uVar10,0);
  if ((uVar11 & 1) != 0) {
    if (param_7 == 0) goto LAB_05ab79dc;
    uVar11 = thunk_FUN_0536b75c(*(undefined8 *)(param_7 + 0x48),lVar1,0);
    if ((uVar11 & 1) == 0) goto LAB_05ab7708;
    if (uVar3 != 0xffffffff) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_05543b28(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
      FUN_05b122d8(plVar16,local_78,uStack_70,0);
      param_7 = local_80;
    }
    *param_5 = uVar23;
    plVar12 = plVar16;
LAB_05ab77e4:
    FUN_05ab2148(param_1,plVar12,0,param_7);
    FUN_05ab812c(param_1,plVar16,0);
    goto LAB_05ab735c;
  }
LAB_05ab7708:
  if (plVar16[0x14] != 0) {
    uVar21 = *(undefined8 *)(plVar16[0x14] + 0x10);
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
    if ((uVar11 & 1) != 0) {
      if (plVar16[0x14] == 0) goto LAB_05ab79dc;
      uVar21 = *(undefined8 *)(plVar16[0x14] + 0x18);
      uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (uVar3 != 0xffffffff) {
          local_78 = 0;
          uStack_70 = 0;
          FUN_05543b28(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
          FUN_05b122d8(plVar16,local_78,uStack_70,0);
        }
        *param_5 = uVar23;
        uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        plVar12 = (long *)FUN_05ab5ee8(param_1,lVar1,uVar10,&local_80);
        param_7 = local_80;
        goto LAB_05ab77e4;
      }
    }
    puVar7 = PTR_DAT_069ff840;
    if (uVar3 == 0xffffffff) {
      lVar13 = plVar16[10];
      lVar2 = plVar16[0xb];
      lVar18 = *(long *)PTR_DAT_069ff840;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar18 = *(long *)puVar7;
      }
      uVar11 = FUN_05547cdc(lVar13,lVar2,**(undefined8 **)(lVar18 + 0xb8),
                            (*(undefined8 **)(lVar18 + 0xb8))[1],0);
      if ((uVar11 & 1) != 0) {
        if (plVar12 == (long *)0x0) goto LAB_05ab79dc;
        FUN_05b0992c(plVar12,plVar16,0);
      }
    }
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    while (lVar13 != 0) {
      uVar23 = uVar23 + 1;
      iVar8 = FUN_05489ff8(lVar13,0);
      if (iVar8 <= (int)uVar23) {
        if (param_7 != 0) {
          uVar11 = thunk_FUN_0536b75c(*(undefined8 *)(param_7 + 0x48),lVar1,0);
          uVar10 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          uVar21 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          if ((uVar11 & 1) == 0) {
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            plVar16 = (long *)FUN_05ab8424(uVar14,uVar10,uVar21,uVar14);
            if (plVar16 != (long *)0x0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar12 = (long *)FUN_05ab5ee8(param_1,lVar1,uVar10,&local_80);
              goto LAB_05ab7ba4;
            }
          }
          else {
            plVar16 = (long *)FUN_05ab82f4(uVar21,uVar10,uVar21);
            plVar12 = plVar16;
            if (plVar16 != (long *)0x0) {
LAB_05ab7ba4:
              plVar17 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                        
                                                  OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo
                                                  );
              FUN_05b0b48c(plVar17,0);
              local_78 = 0;
              uStack_70 = 0;
              FUN_05543b28(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
              if (plVar17 == (long *)0x0) goto LAB_05ab7d04;
              FUN_05b122d8(plVar17,local_78,uStack_70,0);
              FUN_05ab812c(param_1,plVar16,param_8 & 1);
              FUN_05ab2148(param_1,plVar12,0,local_80);
              lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
              if (lVar13 == 0) goto LAB_05ab7d04;
              iVar8 = 0;
              goto LAB_05ab7c40;
            }
          }
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
          uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
          uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          *param_5 = *param_5 + 1;
          plVar16 = (long *)FUN_05ab1b3c(param_1,uVar10,uVar21,uVar14,param_7,uVar15);
          if ((param_2 & 1) != 0) goto LAB_05ab735c;
          lVar13 = *(long *)PTR_DAT_069ff840;
          plVar12 = (long *)PTR_DAT_069ff840;
          if (*(int *)(lVar13 + 0xe4) != 0) goto LAB_05ab7340;
          goto LAB_05ab733c;
        }
        break;
      }
      plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (plVar16 == (long *)0x0) break;
      plVar17 = (long *)(**(code **)(*plVar16 + 0x308))
                                  (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
      if (plVar17 == (long *)0x0) goto LAB_05ab8004;
      bVar4 = *(byte *)(*plVar17 + 0x130);
      bVar5 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar13 = *(long *)(*plVar17 + 200),
         *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar6)) goto LAB_05ab8004;
      bVar5 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((bVar4 < bVar5) || (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar19))
      goto LAB_05ab8004;
      lVar13 = plVar17[0x13];
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_0536b75c(lVar13,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (param_7 == 0) break;
        uVar11 = thunk_FUN_0536b75c(*(undefined8 *)(param_7 + 0x48),lVar1,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_05489ff8(plVar12,0);
            puVar6 = PTR_DAT_069ff840;
            if (iVar8 < 1) goto LAB_05ab7e1c;
            iVar8 = 0;
            goto LAB_05ab7d8c;
          }
          break;
        }
      }
      if (plVar17[0x14] == 0) break;
      uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (plVar17[0x14] == 0) break;
        uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
        uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        uVar11 = thunk_FUN_0536b75c(uVar21,uVar10,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_05489ff8(plVar12,0);
            puVar6 = PTR_DAT_069ff840;
            if (iVar8 < 1) goto LAB_05ab7f08;
            iVar8 = 0;
            goto LAB_05ab7e78;
          }
          break;
        }
      }
      if (plVar12 == (long *)0x0) break;
      FUN_05b0992c(plVar12,plVar17,0);
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    }
  }
LAB_05ab79dc:
  lVar20 = *(long *)(lVar20 + 0x28);
  goto LAB_05ab7d08;
  while( true ) {
    FUN_05b121a0(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_05489ff8(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_05ab7d8c:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05ab7d04;
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
      if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar22);
      }
      goto LAB_05ab80e8;
    }
  }
LAB_05ab7e1c:
  FUN_05ab2148(param_1,plVar17,0,param_7);
  plVar16 = plVar17;
LAB_05ab7e3c:
  FUN_05ab812c(param_1,plVar16,param_8 & 1);
  goto LAB_05ab735c;
  while( true ) {
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
    goto LAB_05ab80a0;
    FUN_05b121a0(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_05489ff8(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_05ab7e78:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05ab7d04;
  }
LAB_05ab7f08:
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  plVar16 = (long *)FUN_05ab5ee8(param_1,lVar1,uVar10,&local_80);
  FUN_05ab2148(param_1,plVar16,0,local_80);
LAB_05ab7f50:
  FUN_05ab812c(param_1,plVar17,param_8 & 1);
LAB_05ab735c:
  if (*(long *)(lVar20 + 0x28) == local_68) {
    return plVar16;
  }
  goto LAB_05ab80e8;
  while( true ) {
    lVar13 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (plVar12 == (long *)0x0) break;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar12 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
        if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar12);
        }
        goto LAB_05ab80e8;
      }
    }
    uVar10 = FUN_05ab8584(param_1,plVar12);
    if (lVar13 == 0) break;
    FUN_05b0992c(lVar13,uVar10,0);
    iVar8 = iVar8 + 1;
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (lVar13 == 0) break;
LAB_05ab7c40:
    iVar9 = FUN_05489ff8(lVar13,0);
    if (iVar9 <= iVar8) {
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (lVar13 != 0) {
        FUN_0548a018(lVar13,0);
        lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        if (lVar13 != 0) {
          FUN_05b0992c(lVar13,plVar17,0);
          goto LAB_05ab735c;
        }
      }
      break;
    }
  }
LAB_05ab7d04:
  lVar20 = *(long *)(lVar20 + 0x28);
LAB_05ab7d08:
  if (lVar20 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05ab80e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


